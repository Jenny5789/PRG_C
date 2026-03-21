/*요구 사항 : 
아래의 정보를 저장하기 위해 적절한 자료형(string, int, double, bool)을 선언하고
아래의 출력 양식에 맞게 출력.
[입력]
- 이름(문자열)
- 현재 나이(정수)
- 나이 비전/목표(문자열)
- 목표 달성치 (정수, 100점 만점 기준), 0~100 입력
- 현재 달성치 (정수)0~100입력
- 비전 활성화 여부(불타입, 0 또는 1 입력) 1:시작, 0:대기

입출력: cin 객체로 정보를 입력 받고,cout 객체로 서식에 맞춰 출력함.
연산:(현재 달성치/목표 달성치*100)을 계산하여 을 소수점 형태로 출력함.

[출력]
--- 나의 성장 비전 리포트 ---
성함 : 최이재(32세)
목표 비전 : 성공
진행도 : 32/100
현재 달성률 : 32%
운영 상태 : 진행 중 
*/


# include <iostream>
# include <string>
using namespace std;

int main()
{
    /* 변수 선언 이름:age, 나이:age, 
    비전/목표: my, 목표 달성치:my, 현재달성치:cur
    비전활성화여부: act, 현재 달성률: rate      */
    string name;
    int age;
    char m;
    int goal;
    int cur;
    bool act;
    double rate;


    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "나이를 입력하세요: ";
    cin >> age;
    cout << "나의 비전(한 단어)을 입력하세요: ";
    cin >> m;
    cout << "목표 수치를 입력하세요(0~100): ";
    cin >> goal;
    cout << "현재 진행 수치를 입력하세요(0~100): ";
    cin >> cur;
    cout << "비전 활성화 여부(1:시작, 0:대기):";
    cin >> act;



    cout << "\n---나의 성장 비전 리포트 ---";
    cout << "성함 : " << name << endl;
    cout << "목표 비전 : " << goal << endl;
    cout << "진행도 : " << cur / act * 100 << endl;
    cout << "현재 달성도 : " << rate << endl;
    cout << "운영 상태 : " << act << endl;

    return 0;

}