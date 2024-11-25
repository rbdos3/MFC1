#pragma once
#include <afxwin.h>

class CCustomButton : public CButton
{
public:
    CCustomButton();
    virtual ~CCustomButton();

protected:
    afx_msg void OnBnClicked(); // 버튼 클릭 이벤트
    DECLARE_MESSAGE_MAP()
};
