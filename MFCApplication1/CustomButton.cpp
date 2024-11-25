#include "CustomButton.h"
#include <afxwin.h>

BEGIN_MESSAGE_MAP(CCustomButton, CButton)
    ON_BN_CLICKED(IDC_BUTTON_MOVE, &CCustomButton::OnBnClicked) // ��ư ID�� ���� �̺�Ʈ ó��
END_MESSAGE_MAP()

CCustomButton::CCustomButton() {}
CCustomButton::~CCustomButton() {}

void CCustomButton::OnBnClicked()
{
    // Ŭ�� �� â �̵� ����
    AfxMessageBox(_T("Button Clicked: Moving Window"));

    CWnd* pMainWnd = AfxGetMainWnd(); // ���� â ��������
    if (pMainWnd)
    {
        CRect rect;
        pMainWnd->GetWindowRect(&rect);
        pMainWnd->MoveWindow(rect.left + 50, rect.top + 50, rect.Width(), rect.Height());
    }
}
