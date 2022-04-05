#include "MainFrame.h"
#include <wx/msgdlg.h>

MainFrame::MainFrame(wxWindow *parent)
    : Frame(parent)
{
}

void MainFrame::MainFrameOnLeftDown(wxMouseEvent &event)
{
    wxMessageBox("MainFrameOnLeftDown");
}

void MainFrame::MainFrameOnShow(wxShowEvent &event)
{
    wxMessageBox("MainFrameOnShow");
}
