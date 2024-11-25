#include "CustomButton.h"
#include <afxwin.h>

BEGIN_MESSAGE_MAP(CCustomButton, CButton)
    ON_BN_CLICKED(IDC_BUTTON_MOVE, &CCustomButton::OnBnClicked) // 버튼 ID에 대한 이벤트 처리
END_MESSAGE_MAP()

CCustomButton::CCustomButton() {}
CCustomButton::~CCustomButton() {}

void CCustomButton::OnBnClicked()
{
    // 클릭 시 창 이동 로직
    AfxMessageBox(_T("Button Clicked: Moving Window"));

    CWnd* pMainWnd = AfxGetMainWnd(); // 메인 창 가져오기
    if (pMainWnd)
    {
        CRect rect;
        pMainWnd->GetWindowRect(&rect);
        pMainWnd->MoveWindow(rect.left + 50, rect.top + 50, rect.Width(), rect.Height());
    }
}
