#include <iostream>
#include <iomanip>

using namespace std;

#if 0
int main(){
    char ch;
    cin >> ch;

    switch (ch){

        case 'a':

        case 'A':

            cout << "이 학생의 학점은 A입니다." << endl;

            break;

        case 'b':

        case 'B':

            cout << "이 학생의 학점은 B입니다." << endl;

            break;

        case 'c':

        case 'C':

            cout << "이 학생의 학점은 C입니다." << endl;

            break;

        case 'd':

        case 'D':

            cout << "이 학생의 학점은 D입니다." << endl;

            break;

        case 'f':

        case 'F':

            cout << "이 학생의 학점은 F입니다." << endl;

            break;

        default:

            cout << "학점을 정확히 입력해 주세요!(A, B, C, D, F)" << endl;

            break;
    }
    return 0;
}
#endif

// 범위 기반의 for
#if 0
int main(){
    int arr[5] = {1, 3, 5, 7, 9};

    for (int element : arr){
        cout << element << " ";
    }

    return 0;
}

#endif

// 1차원배열
#if 0
int main(){
    int arr[5];

    for (int element : arr){
        cout << "배열 쓰레깃값" << element << endl;
    }

    int arr2[5] = {1, 3, 5, 7, 9};

    for (int element : arr2){
        cout << "배열 초기화 후" << element << endl;
    }

    return 0;
}

#endif

// 1차원배열
#if 0
int main(){
    int sum = 0;
    int grade[3];

    grade[0] = 85;
    grade[1] = 65;
    grade[2] = 90;

    for (int i = 0; i < 3; i++){
        sum += grade[i];
    }

    cout << "국영수 과목 총 점수 합계는" << sum << "점이고 평균 점수는 " << (double)sum/3 << "점입니다.";

    return 0;
}

#endif


#if 0

int main(){
    int arr1[3] = {0, 1, 2}; // 배열의 선언과 동시에 초기화는 가능함.

    int arr2[3];             // 배열의 선언

    arr2[3] = {0, 1, 2};     // 배열이 먼저 선언된 후에는 이 방식으로 초기화될 수 없음. 오류가 발생함.

    arr2 = arr1;             // 길이가 같더라도 하나의 배열을 다른 배열에 통째로 대입할 수는 없음. 오류가 발생함.

    return 0;
}

#endif

#if 0
int main(){
    int arr1[2][3] = {10, 20, 30, 40};
    int arr2[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    for (const auto &row : arr1){
        for (int element : row){
            cout << element << " ";
        }
        cout << endl;
    }
    for (const auto &row : arr2){
        for (int element : row){
            cout << element << " ";
        }
        cout << endl;
    }


    return 0;
}

#endif

#if 1
int main(){
    int arr_col_len, arr_row_len;
    int arr[3][4] = {
        {10, 20},
        {30, 40, 50, 60},
        {0, 0, 70, 80}
    };

    arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);
    arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);

    cout << "arr의 배열 요소의 값" << endl;
    
    for (int i = 0; i < arr_row_len; i++){
        for(int j = 0; j < arr_col_len; j++){
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

#endif