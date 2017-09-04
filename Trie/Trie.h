#include "TrieNode.h"

class Trie {
    TrieNode *root;
    int countWords;

    public :

    Trie() {
        root = new TrieNode('\0');
        countWords = 0;
    }

    void addWord(TrieNode *root, char *word) {
        // Base case
        if(word[0] == '\0') {
            root -> isTerminal = true;
            return;
        }

        // Small calculation
        TrieNode *child;
        char currentChar = word[0];
        if(root -> children.count(currentChar) == 1) {
            child = root -> children[currentChar];
        }
        else {
            child = new TrieNode(currentChar);
            root -> children[currentChar] = child;
        }

        // Rec call
        addWord(child, word+1);
    }

    void addWord(char *word) {
        addWord(root, word);
        countWords++;
    }

    void removeWord(TrieNode *root, char *word) {
        if(word[0] == '\0') {
            root -> isTerminal = false;
            return;
        }

        TrieNode *child;
        char currentChar = word[0];
        if(root -> children.count(currentChar) == 1) {
            child = root -> children[currentChar];
        }
        else {
            return;
        }
        removeWord(child, word + 1);

        if(child -> isTerminal == false && child -> children.size() == 0) {
            root -> children.erase(currentChar);
            delete child;
        }
    }

    void removeWord(char *word) {
        removeWord(root, word);
    }
  bool Search(TrieNode *root, char *word)  
  {
  	if(word[0] == '\0') {
           
            return 1;
        }
        TrieNode *child;
        char currentChar = word[0];
        if(root -> children.count(currentChar) == 1) {
            child = root -> children[currentChar];
            int check=Search(child,word+1);
        }
        else{
		
        return 0;
    }
    if(check!=0)
    {
    	return 1;
	}
	return 0;
  }
    
};














