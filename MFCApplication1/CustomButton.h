#pragma once
#include <afxwin.h>

class CCustomButton : public CButton
{
public:
    CCustomButton();
    virtual ~CCustomButton();

protected:
    afx_msg void OnBnClicked(); // ��ư Ŭ�� �̺�Ʈ
    DECLARE_MESSAGE_MAP()
};
