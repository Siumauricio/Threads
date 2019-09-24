
#include <iostream>
#include <thread>

using namespace std;

void Tiempo()
{
	int segs = 2;
	int n = 0;
	cout << "iniciando Timer cada " << segs << " segundos" << endl;
	while (1)
	{
		n++;
		std::this_thread::sleep_for(std::chrono::seconds(segs));
		//sleep(segs);
		cout << "ejecucion Timer " << n << endl;
	}
	cout << "finalizando Timer" << endl;
}

int main()
{
	int segs = 5;
	int n = 0;
	cout << "iniciando hilo1" << endl;
	std::thread uno(Tiempo);

	cout << "iniciando main cada " << segs << " segundos" << endl;
	while (1)
	{
		n++;
		std::this_thread::sleep_for(std::chrono::seconds(segs));
		//sleep(segs);
		cout << "ejecucion main " << n << endl;
	}
	cout << "finalizando main" << endl;
	return 0;
}
