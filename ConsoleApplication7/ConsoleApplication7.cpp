// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//
#include <iostream>
#include <set>
#include <string>
#include <map>
using namespace std;
int main() {
	map<string, string> syn;
	int n;
	string s_word;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string first, second;

		cin >> first >> second;
		syn[first] = second;
		syn[second] = first;


	}
	cin >> s_word;
	cout << syn[s_word];



	return 0;
}




/*include <iostream>
#include <string>
using namespace  std;

int main() {
	
	string l;
	getline(cin, l);
	int max = 0;
	int c = 0;
	int d = 0;
	for (int i = 0; i < l.size(); i++) {
		if (l[i] != ' ') {
			c++;
		}
		else {
			if (c > max) {
				c = max;
				
			}
			c = 0;
		}
		if (c > max) {
			c = max;
			d = i - c + 1;
		}

	}

	for (int i = d; i < d + max; i++) {
		cout << l[i] << endl;
	}



	system("pause");
	return 0;
}*/




//#include <iostream>
//using namespace std;
//
//int main()
//{
//    system("chcp 1251>nul");
//    const int N = 50;
//    double arr[N];
//    int n;
//    cout << "Введите размер массива:  " << endl;
//    cin >> n;
//    cout << "Введите элементы массива: " << endl;
//    for (int i = 0; i <= n; i++) { arr[i] = 0; }
//    for (int i = 0; i < n; i++) { cin >> arr[i]; }
//    double avg = 0;
//    for (int i = 0; i < n; i++) { avg += arr[i]; }
//    avg /= n;
//    int max = arr[0];
//    int maxIndex = 0;
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//            maxIndex = i;
//        }
//    }
//
//    arr[n] = avg;
//
//    for (int i = n; i > maxIndex + 1; i--)
//        swap(arr[i], arr[i - 1]);
//
//    for (int i = 0; i <= n; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//
//}

	// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
	// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

	// Советы по началу работы 
	//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
	//   2. В окне Team Explorer можно подключиться к системе управления версиями.
	//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
	//   4. В окне "Список ошибок" можно просматривать ошибки.
	//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
	//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
