#include <map>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    // PAIR //

    // VECTOR //

    vector<int> v = {20, 10, 15, 16, 17};

    // Delete from Vector

    v.erase(v.begin() + 1); // deletes 10-->{20, 15, 16, 17}

    v.erase(v.begin(), v.begin() + 2); // deletes from 20 to 16-->{17}

    // Insert to Vector
    // NOTE: Insert is costlier operation tha push front of list

    v.insert(v.begin(), 100);       // adds after first element --> {100, 17}
    v.insert(v.begin() + 1, 2, 10); // adds '10' twice after 1st position --> {100, 10, 10, 17}

    cout << v.size(); // 4

    v.pop_back(); // delets last element --> {100, 10, 10}

    vector<int> v1 = {1, 2};
    vector<int> v2 = {4, 5};

    v1.swap(v2); // interchanges v1 and v2

    v1.clear(); // erases vector v1 i.e. empty vector

    // LIST //

    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(9);    // {9, 2, 4}
    ls.emplace_front(5); // {5, 9, 2, 4}

    // rest functions are similar to vector
    //  begin, end, rbegin, rend, clear, insert, size, swap

    // Deque

    deque<int> dq;

    // same as list

    // STACK //
    /// LIFO--> last in first out

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.emplace(4); // {4, 3, 2, 1}

    cout<<st.top();

    st.pop(); // {3, 2, 1}

    cout<<st.size(); // 3
    cout<<st.empty(); // {}

    // QUEUE
    // FIFO--> First In First Out

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    cout<<q.back(); //3
    cout<<q.front(); //1

    q.pop(); // {1, 2}

    //PRIORITY_QUEUE
    //largest element is at the top
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    pq.pop(); // {8, 5, 2}

    // SET
    //everthing is sorted, everything is unique
    set<int> s;

    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.emplace(2); // {1, 2}
    s.insert(4); // {1, 2, 4}
    
    auto it = s.find(3); // returns an iterator pointing to 3

    s.count(3); //either 0 or 1

    // MULTISET
    // only sorted not unique

    multiset<int> ms;

    // UNORDERED SET
    // unordered but unique

    unordered_set<int> us;

    //MAPS 
    //Everything is stored in key value pair, keys are unique, value may not be
    //Stores unique keys in sorted order
    map<int,int> mpp;

    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4}); // [{1,2}{3,1}{2,4}]

    for(auto it:mpp){
        cout<<it.first<<it.second;
    }

    cout<<mpp[1]; // 2
    cout<<mpp[5]; //0 or null

    auto it = mpp.find(3);
    cout<<*(it).second;


    //MULTI MAP
    // same as map only duplicate keys can be stored
    // map[key] cannot be used here

    //UNORDERED MAP
    // same as map but not sorted

    //Sorting ARRAYS AND VECTORS
    int a[4] = {1,2,5,3};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a,a+n); // sorts the entire array a
    sort(v.begin(),v.end());

    sort(a+2,a+n);//sorts 5,3
    sort(a,a+n,greater<int>); // sorts the entire array in descending order

    pair<int,int> p[] = {{1,2},{2,1},{4,1}};

    //SITUATION
    //I want to sort in ascending according to second element
    //But {2,1}&{4,1} have same second element
    //In this case I want to sort both according to first element but in descending order

    bool comp( pair<int,int> p1, pair<int,int> p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return fasle;
        //for equal 
        if(p1.first>p2.first) return true;
        return fasle;
    };
    sort(a,a+n,comp); // here comp is a custom comparator function, should have a return type boolean


//Permutations
string s = "123";

    do{
        cout<<s<<endl;
    }while(
        next_permutation(s.begin(), s.end());
    )
    // 123,231,321......
    //must start from sorted to print all conditions
    return 0;
}
