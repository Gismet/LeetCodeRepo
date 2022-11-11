class Trie
{
private:
    struct TrieNode
    {
        int isEnd;
        TrieNode *charNodes[26];
    };

public:
    Trie()
    {
        _root = new TrieNode();
        for (int i = 0; i < 26; i++)
        {
            _root->charNodes[i] = NULL;
        }
    }

    void insert(std::string word)
    {
        TrieNode *current = _root;
        int i = 0;
        while (i < word.length())
        {
            if (current->charNodes[word[i] - 'a'] == NULL)
            {
                current->charNodes[word[i] - 'a'] = createNewTrieNode();
            }
            current = current->charNodes[word[i] - 'a'];
            i++;
        }
        current->isEnd = 1;
    }

    bool search(std::string word)
    {
        TrieNode *current = _root;
        int i = 0;
        while (i < word.length())
        {
            if (current->charNodes[word[i] - 'a'] == NULL)
                return 0;
            current = current->charNodes[word[i] - 'a'];
            i++;
        }
        return current->isEnd;
    }

    bool startsWith(std::string prefix)
    {
        TrieNode *current = _root;
        int i = 0;
        while (i < prefix.length())
        {
            if (current->charNodes[prefix[i] - 'a'] == NULL)
            {
                return 0;
            }
            current = current->charNodes[prefix[i] - 'a'];
            i++;
        }
        return 1;
    }

private:
    TrieNode *createNewTrieNode();
    TrieNode *_root;
};

Trie::TrieNode *Trie::createNewTrieNode()
{
    TrieNode *newTrieNode = new TrieNode();
    for (int i = 0; i < 26; i++)
    {
        newTrieNode->charNodes[i] = NULL;
    }
    newTrieNode->isEnd = 0;
    return newTrieNode;
}