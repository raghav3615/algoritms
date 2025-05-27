// print :
// Enter a number 4
// ****
// ****
// ****
// ****

int main() {
    // Write C++ code here
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int i =1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}    