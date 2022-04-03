#pragma once
#include <iostream>
#include <ctime>
using namespace std;
/*
	��װ������صĲ���
	���˾��������⣬��Ҫ�����ڴ��ϵĹ������Ż�
*/
class Matrix
{
	friend Matrix operator*(const Matrix& a, const Matrix& b);	// ����˷�
	friend ostream& operator<<(ostream& out, const Matrix& mat);	//�������
	friend Matrix operator+(const Matrix& a, const Matrix& b);	// ����Ӽ���
	friend Matrix operator-(const Matrix& a, const Matrix& b);
private:
	double** a;		// �洢��ά����
public:
	int row, column;
	Matrix(int row, int column);	// �����ڴ�
	double*& operator[](int ind);	// �����±�������� �����޸ľ���
	const double*& operator[](int ind)const;
	Matrix& operator=(Matrix&& mat) noexcept;	// �ƶ���ֵ
	Matrix operator=(const Matrix& mat);	// ���ظ�ֵ
	Matrix(const Matrix& mat);		// ��������
	Matrix getTrans()const;	// �����ת��
	~Matrix();	// �ͷ��ڴ�
	void randMatrix();		// ��������е�ֵ
	void fill(double num); //������������Ԫ������һ��ֵ
	void matrixI(); // ����һ����λ����
	void matrixO(); // ����һ�������
	void forEach(double (*f)(double));	// �Ծ�����ÿ��Ԫ��Ӧ�ú���f
	Matrix mutipleByNumber(double num)const;	// ���������
	static double Rand(int l, int r);	// ���������
};
