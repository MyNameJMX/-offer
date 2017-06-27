#include <cstdlib>
#include <string>
class CMyString {
public:
	CMyString(char* pData = NULL);
	CMyString(const CMyString& str);
	CMyString& operator=(const CMyString& str) const;
	~CMyString();
private:
	char* m_pData;
};

CMyString& CMyString::operator=(const CMyString& str) const
{
	if (&str == this)
		return *this;
	delete[] m_pData;
	m_pData = NULL;
	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);
	return *this;
}

CMyString& CMyString::operator=(const CMyString &str) const
{
	if (this != &str) 
	{
		CMyString strTemp(str);

		char* pTemp = strTemp.m_pData;
		strTemp.m_pData = m_pData;
		m_pData = pTemp;
	}
	return *this;
}