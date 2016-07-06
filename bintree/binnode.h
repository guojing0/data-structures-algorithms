#pragma once

#define BinNodePosi(T) BinNode<T>*
#define stature(p) ((p) ? (p)->height : -1)

typedef enum {RB_RED, RB_BLACK} RBColor;

template <typename T> struct BinNode {
    T data;
    BinNodePosi(T) parent, lc, rc;
    int height, npl;
    RBColor color;

    BinNode() : parent(NULL), lc(NULL), rc(NULL),
                height(0), npl(1),
                color(RB_RED) {}
    BinNode(T e, BinNodePosi(T) p = NULL, BinNodePosi(T) lc = NULL, BinNodePosi(T) rc = NULL,
            int h = 0, int n = 1, RBColor c = RB_RED) :
            data(e), parent(p), lc(lc), rc(rc), height(h), npl(n), color(c) {}

    int size();
    BinNodePosi(T) insertAsLC(T const&);
    BinNodePosi(T) insertAsRC(T const&);
    BinNodePosi(T) succ();
    bool operator< (BinNode const& bn) {
        return data < bn.data;
    }
    bool operator> (BinNode const& bn) {
        return data > bn.data;
    }
    bool operator== (BinNode const& bn) {
        return data == bn.data;
    }
    bool operator!= (BinNode const& bn) {
        return data != bn.data;
    }
    template <typename VST> void travPre(VST&);
    template <typename VST> void travIn(VST&);
    template <typename VST> void travPost(VST&);
    template <typename VST> void travLevel(VST&);
};

#include "binnode_implement.h"