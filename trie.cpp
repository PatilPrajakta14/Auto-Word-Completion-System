#include <iostream>
#include<vector>
using namespace std;
class node
{
    public:
    node* next[26];
    bool end;
    node()
    {
        for(int i=0;i<26;i++)
        {
            next[i]=NULL;
        }
        end=false;
    }
};
class trie
{
    private:
    node* root;
    public:
    trie()
    {
        root=new node();
       
    }
    void insert(string &s)
    {
        node* it=root;
        for(auto c: s)
        {
            if(!it->next[c-'a'])
            it->next[c-'a']=new node();
            it=it->next[c-'a'];
           
        }
        it->end=true;
    }
    void find(string &s)
    {
        node* it=root;
        for(auto c :s)
        {
            if(!it->next[c-'a']){
            cout<<"No suggestions"<<endl;
            insert(s);
            return;
        }
        it=it->next[c-'a'];
        }
        vector<string>res;
        printall(it,s,res,"");
        for(auto c: res)
        {
            cout<<"Your suggestions are: "<<s<<c<<"\n";
        }
       
    }
    void printall(node* it,string &s,vector<string> &res,string cur)
    {
        if(it==NULL)
        return;
        if(it->end)
        {
            res.push_back(cur);
        }
        for(int i=0;i<26;i++)
        {
            if(it->next[i])
            {
                printall(it->next[i],s,res,cur + char('a'+i));
            }
        }
    }
   
};
int main()
{
    trie t;
    int n,choice;
    char ch;
    cout<<"Enter the no. of words you want to insert: ";
    cin>>n;
    vector<string> a(n);
    for(auto &i : a){
    cout<<"Enter the word: "<<endl;
    cin>>i;
    t.insert(i);}
    string s;
    int q;
    do
    {
        cout<<"\n1.To Search Words\n2.Exit\n";
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter Y or N: "<<endl;
            cin>>ch;
            if(ch=='Y' || ch=='y')
            {
                cout<<"Enter search: "<<endl;
                    cin>>s;
                    t.find(s);
                    break;
            }
            else
            {
                exit(0);
            }
            break;
           
            case 2:
            exit(0);
           
        }
    }while(ch!=3);
    return 0;
}


