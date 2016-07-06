#pragma once

#include <string>

#include "binnode.h"

template <typename T> class BinTree {
protected:
    int _size;
    BinNodePosi(T) _root;
    virtual int updateHeight(BinNodePosi(T) x);
    void updateHeightAbove(BinNodePosi(T) x);

public:
    BinTree() : _size(0), _root(NULL) {}
    ~BinTree() {
        if (_size > 0) {
            remove(_root);
        }
    }
    int size() const {
        return _size;
    }
    bool empty() const {
        return !_root;
    }
    BinNodePosi(T) root() {
        return _root;
    }
    BinNodePosi(T) insertAsRoot(T const &e);
    BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const &e);
    BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const &e);
    BinNodePosi(T) attachAsLC(BinNodePosi(T) x, BinTree<T>* &T);
    BinNodePosi(T) attachAsRC(BinNodePosi(T) x, BinTree<T>* &T);
    int remove(BinNodePosi(T) x);
    BinTree<T>* secede(BinNodePosi(T) x);
    template <typename VST> void travLevel(VST& vst) {
        if (_root) {
            _root->travLevel(vst);
        }
    }
    template <typename VST> void travePre(VST& vst) {
        if (_root) {
            _root->travPre(vst);
        }
    }
    template <typename VST> void travIn(VST& vst) {
        if (_root) {
            _root->travIn(vst);
        }
    }
    template <typename VST> void travPost(VST& vst) {
        if (_root) {
            _root->travPost(vst);
        }
    }
    bool operator== (BinTree<T> const &t) {
        return _root && t._root && (_root == t._root);
    }
    bool operator!= (BinTree<T> const &t) {
        return _root && t._root && (_root != t._root);
    }
    bool operator< (BinTree<T> const &t) {
        return _root && t._root && (_root > t._root);
    }
    bool operator> (BinTree<T> const &t) {
        return _root && t._root && (_root < t._root);
    }
};