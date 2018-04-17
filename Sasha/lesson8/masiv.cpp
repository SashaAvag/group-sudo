#include <iostream>

int main () {
    int n , sum_odd = 0, sum_cpl = 0, max = 0, min = 0;
    std:: cout << "Enter size of array: ";
    std:: cin >> n;
    int arr [n];
    for (int i = 0; i < n; i++) {
        std:: cout << "Enter element: ";
        std:: cin >> arr[i];
        if (arr[i] > 0){
            if (arr[i] % 2 == 0) {
                sum_cpl += arr[i];
            }
            if (arr[i] % 2 != 0) {
                sum_odd += arr[i];
            }

            if (max <= arr[i] ) {
                max = arr [i];
            }
            if (min == 0) {
                min = arr[i];
                }
            if (min >= arr[i]) {
                min = arr [i];
            }
        }else {
            i--;
            std:: cout << "elements must be 1 or more" <<std:: endl;
        }
    }
    std:: cout << "Sum of odd elements: " << sum_odd << std:: endl;
    std:: cout << "Sum of couple elements: " << sum_cpl << std:: endl;
    std:: cout << "Maximal number of this array: " << max << std:: endl;
    std:: cout << "Minimal number of this array: " << min << std:: endl;
    return 0;
}
