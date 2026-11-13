#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // printing in reverse order -> emptying the stack
    //printing element from top ->bottom 
    //while(st.size()>0){
    //    cout<<st.top()<<" ";
    //    st.pop();
    //}

    // we will use extra stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" "<<endl;
        int x = st.top();
        st.pop();
        temp.push(x);

    }


    //printing element from bottom-> top 
    //while(temp.size()>0){
      //  cout<<temp.top()<<" ";
        //temp.pop();

    //}

    // putting elements back from temp to st
    //while(temp.size()>0){
      //  int x = temp.top();
        //temp.pop();
        //st.push(x);

    //}




}