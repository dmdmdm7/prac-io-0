#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>& arr){
    int n = arr.size();
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (arr[j] > arr[j+1]){
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    std::vector<int> arr{1,6,2,4,3,9,8,5,0,7};
    std::cout<<"Before:\n";
    for (int i=0; i<arr.size(); i++){
        std::cout<<arr[i]<<' ';
    }
    std::cout<<'\n';
    bubble_sort(arr);
    std::cout<<"After:\n";
    for (int i=0; i<arr.size(); i++){
        std::cout<<arr[i]<<' ';
    }
    std::cout<<'\n';
    return 0;
}