#include <iostream>
using namespace std;
#include "Trie.h"
int main() {
    Trie t;

    t.addWord("abc");
    t.addWord("def");
    t.addWord("abd");

    t.removeWord("abc");
    t.Search("def");
}

