//
// Created by ben on 7/15/19.
//
#include <list>
using namespace std;

class Vma {
public:
    int start_vpage, end_vpage;
    bool write_protected, filemapped;

    Vma(int start_vpage, int end_vpage, bool write_protected, bool filemapped) {
        this->start_vpage = start_vpage;
        this->end_vpage = end_vpage;
        this->write_protected = write_protected;
        this->filemapped = filemapped;
    }
};

class Process {
public:
    int num_vmas;
    list<Vma> vma_list;

    void add_vma(Vma vma) {
        vma_list.push_back(vma);
    }
};
