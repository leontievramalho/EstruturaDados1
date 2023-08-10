#include <iostream>
#include <cmath>
using namespace std;

int qum() {
	cout << "Ola, mundo!" << endl;
	return 0;
}

int qdois(){
	cout << "Digite um numero: ";
	int num;
	cin >> num;
	cout << "Voce digitou " << num;
	return 0;
}

int qtres(){
	int num1;
	int num2;
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	cout << num1 << " + " << num2 << " = " << num1+num2;
	return 0;
}

int qquatro(){
	float num1;
	float num2;
	float num3;
	float num4;
	float media;
	
	cout << "Nota 1: ";
	cin >> num1;
	cout << "Nota 2: ";
	cin >> num2;
	cout << "Nota 3: ";
	cin >> num3;
	cout << "Nota 4: ";
	cin >> num4;
	media = (num1+num2+num3+num4)/4;
	cout << "Media = " << media;

	return 0;
}

int qcinco(){
	float metro;
	float cm;
	cout << "Metros: ";
	cin >> metro;
	cm = metro*100;
	cout << metro << " m = " << cm << " cm";
	
	return 0;
}

int qseis(){
	float raio;
	float area;
	cout << "Raio = ";
	cin >> raio;
	area = 3.14*pow(raio,2);
	cout << "Area da circunferencia de raio " << raio << ": " << area;
	return 0;
}

int qsete(){
	float area;
	float lado;
	cout << "Lado do quadrado = ";
	cin >> lado;
	area = pow(lado, 2);
	cout << "Dobro da area: " << 2*area;
	return 0;
}

int qoito(){
	int horas;
	float valorhora;
	float salario;
	cout << "Valor recebido por hora: ";
	cin >> valorhora;
	cout << "Horas trabalhadas: ";
	cin >> horas;
	salario = horas*valorhora;
	cout << "Salario do mes: " << salario;
	return 0;
}

int qnove(){
	float far;
	float cel;
	cout << "temperatura em Farenheit = ";
	cin >> far;
	cel = (far-32)/1.8;
	cout << far << "F = " << cel << "C";
	return 0;
}

int qdez(){
	float far;
	float cel;
	cout << "temperatura em Celsius = ";
	cin >> cel;
	far = (cel*9/5)+32;
	cout << cel << "C = " << far << "F";
	return 0;
}

int qonze(){
	float dolar;
	float real;
	cout << "Salario em dolar = ";
	cin >> dolar;
	real = dolar*4.80;
	cout << "Salario em real = " << real;
	return 0;
}

int qdoze(){
	float altura;
	float pesoIdealH;
	float pesoIdealM;
	cout << "Altura = ";
	cin >> altura;
	pesoIdealH = (72.7*altura) - 58;
	pesoIdealM = (62.1*altura) - 44.7;
	cout << "Peso ideal: \nHomem = " << pesoIdealH << "\nMulher = " << pesoIdealM;
	return 0;
}

int qtreze(){
	int horas;
	float valorhora;
	float salarioBruto;
	float salarioLiquido;
	cout << "Valor recebido por hora: ";
	cin >> valorhora;
	cout << "Horas trabalhadas: ";
	cin >> horas;
	salarioBruto = horas*valorhora;
	salarioLiquido = salarioBruto*0.76;
	cout << "Salario liquido do mes: " << salarioLiquido;
	return 0;
}

int qquatorze(){
	for(int i = 1; i<10; i++){
		for(int j = 1; j<10; j++){
			cout << i << " x " << j << " = " << i*j << endl;
		}
	}
	return 0;
}

int qquinze(){
	float area;
	float litrosNecessarios;
	int latas;
	float precoTotal;
	cout << "Tamanho em metros quadrados da area a ser pintada: ";
	cin >> area;
	litrosNecessarios = area/3;
	latas = (int) litrosNecessarios/18 + 1;
	precoTotal = latas*80;
	cout << "Quantidade de latas de tinta a serem compradas = " << latas << endl;
	cout << "Preco total = " << precoTotal;
	return 0;
}

int main() {
	int questao;
	cout << "qual questao deseja visualizar? " << endl;
	cin >> questao;
	switch(questao) {
		case 1:
			qum();
			break;
		case 2:
			qdois();
			break;
		case 3:
			qtres();
			break;
		case 4:
			qquatro();
			break;
		case 5:
			qcinco();
			break;
		case 6:
			qseis();
			break;
		case 7:
			qsete();
			break;
		case 8:
			qoito();
			break;
		case 9:
			qnove();
			break;
		case 10:
			qdez();
			break;
		case 11:
			qonze();
			break;
		case 12:
			qdoze();
			break;
		case 13:
			qtreze();
			break;
		case 14:
			qquatorze();
			break;
		case 15:
			qquinze();
			break;
	}
	return 0;
}


