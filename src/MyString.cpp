#include "MyString.hpp"

void MyString::setString(const char *s)
{
    maiString = new char[tam + 1];
    strcpy(maiString, s);
}

MyString::MyString(const char *algo) : tam(strlen(algo))
{
    setString(algo);
}
MyString::~MyString()
{
    if (maiString != NULL)
        delete[] maiString;
    maiString = NULL;
}

const char *MyString::getString() { return maiString; }

void MyString::operator=(const char *s)
{
    if (maiString != s)
    {
        delete[] maiString;
        tam = strlen(s);
        setString(s);
    }
}
void MyString::operator=(MyString &s)
{
    operator=(s.getString());
}
bool MyString::operator==(MyString &s)
{
    if (0 == strcmp(maiString, s.getString()))
        return true;
    else
        return false;
}
bool MyString::operator!=(MyString &s)
{
    if (0 == strcmp(maiString, s.getString()))
        return false;
    else
        return true;
}
char *MyString::operator+(MyString &s)
{
    char *str3 = new char[strlen(maiString) + strlen(s.getString())];
    const char *str1 = maiString, *str2 = s.getString();

    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0' || str2[j] != '\0')
    {
        if (str1[i] != '\0')
        {
            str3[i] = str1[i];
            i++;
        }
        else
        {
            str3[k] = str2[j];
            j++;
        }
        k++;
    }

    return str3;
}
char *MyString::operator+(char *str)
{
    char *str3 = new char[strlen(maiString) + strlen(str)], *str2 = str;
    const char *str1 = maiString;

    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0' || str2[j] != '\0')
    {
        if (str1[i] != '\0')
        {
            str3[i] = str1[i];
            i++;
        }
        else
        {
            str3[k] = str2[j];
            j++;
        }
        k++;
    }

    return str3;
}
char MyString::operator[](int index)
{
    if (index >= tam || index < 0)
        return ' ';
    return maiString[index];
}