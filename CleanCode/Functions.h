#pragma once


#define MAX_SIZE_STRING 20
#define MAX_SIZE_SYMBOL 81

/*!
* Удалить все комментарии из текста
*  \param [in|out] text текст для обработки
*  \param [in] lengthOfTextInput длина текста
*  return - количество строк в тексте
*/
int deleteCommentsInCode(char text[MAX_SIZE_STRING][MAX_SIZE_SYMBOL], const int lengthOfText);

/*!
* Поиск первого вхождения символов(symbolInput) в текстe(text)
*  \param [in] text текст для поиска
*  \param [in] lengthOfText количество строк в тексте
*  \param [in] symbolInput символы для поиска
*  \param [out] x координата найженного символа в строке(возвращает -1, если не найдены)
*  \param [out] y координата найженного символа в столбце(возвращает -1, если не найдены)
*  return - true, если найдено или false, если не найдено
*/
bool findStrInText(const char text[MAX_SIZE_STRING][MAX_SIZE_SYMBOL], const int lengthOfText, const char* symbolInput, int* x, int* y);

/*!
* Сравнение координат двух символов:Если первый символ ближе к началу, то функция возвращает 0, иначе 1.
*  \param [in] x1 координата x для первой точки
*  \param [in] y1 координата y для первой точки
*  \param [in] x2 координата x для второй точки
*  \param [in] y2 координата y для второй точки
*  return - 0, eсли первая точка ближе к центру координат, 1 если наоборот
*/
bool cmpCoordinate(const int x1, const int y1, const int x2, const int y2);