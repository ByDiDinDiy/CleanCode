#pragma once


#define MAX_SIZE_STRING 20
#define MAX_SIZE_SYMBOL 81

/*!
* ������� ��� ����������� �� ������
*  \param [in|out] text ����� ��� ���������
*  \param [in] lengthOfTextInput ����� ������
*  return - ���������� ����� � ������
*/
int deleteCommentsInCode(char text[MAX_SIZE_STRING][MAX_SIZE_SYMBOL], const int lengthOfText);

/*!
* ����� ������� ��������� ��������(symbolInput) � �����e(text)
*  \param [in] text ����� ��� ������
*  \param [in] lengthOfText ���������� ����� � ������
*  \param [in] symbolInput ������� ��� ������
*  \param [out] x ���������� ���������� ������� � ������(���������� -1, ���� �� �������)
*  \param [out] y ���������� ���������� ������� � �������(���������� -1, ���� �� �������)
*  return - true, ���� ������� ��� false, ���� �� �������
*/
bool findStrInText(const char text[MAX_SIZE_STRING][MAX_SIZE_SYMBOL], const int lengthOfText, const char* symbolInput, int* x, int* y);

/*!
* ��������� ��������� ���� ��������:���� ������ ������ ����� � ������, �� ������� ���������� 0, ����� 1.
*  \param [in] x1 ���������� x ��� ������ �����
*  \param [in] y1 ���������� y ��� ������ �����
*  \param [in] x2 ���������� x ��� ������ �����
*  \param [in] y2 ���������� y ��� ������ �����
*  return - 0, e��� ������ ����� ����� � ������ ���������, 1 ���� ��������
*/
bool cmpCoordinate(const int x1, const int y1, const int x2, const int y2);