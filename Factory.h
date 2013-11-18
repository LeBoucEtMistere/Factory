//
//  Factory.h
//  Factory
//
//  Created by DEPASSE Arthur on 05/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//

#ifndef __Factory__Factory__
#define __Factory__Factory__

#include <utility>
#include <map>

template<class T,typename ... ARGS>
struct Creator
{
    std::unique_ptr<T> operator()(ARGS ... a)
    {
        return std::unique_ptr<T> ( new T(a...));
    }
};


template <class Key, class Object, typename ... A>
class Factory{
public:
    
    using MapType = std::map<Key,std::function<std::unique_ptr<Object>()>>;
    using CreatorType = std::function<std::unique_ptr<Object>(A ...)>;
    
    template <class U>
    bool registerItem(Key key, CreatorType creator = Creator<U>())
    {
        if(_creatorMap.find(key) != _creatorMap.end())
            return false; // la clef est deja utilisé
        _creatorMap.insert(std::make_pair(key, creator));
        return true;
    }
    
    std::unique_ptr<Object> create(Key key)
    {
        auto it = _creatorMap.find(key);
        if(it == _creatorMap.end())
            return nullptr;
        auto & creator = it->second;
        return std::unique_ptr<Object>{creator()};
    }
    
protected:
    
    MapType _creatorMap;

};


#endif /* defined(__Factory__Factory__) */
