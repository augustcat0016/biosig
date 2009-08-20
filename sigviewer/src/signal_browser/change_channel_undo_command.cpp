#include "change_channel_undo_command.h"

#include "../main_window_model.h"

namespace BioSig_
{

namespace PortingToQT4_
{

//-----------------------------------------------------------------------------
ChangeChannelUndoCommand::ChangeChannelUndoCommand (SignalBrowserModel& signal_browser_model,
                                          QSharedPointer<SignalEvent> signal_event,
                                          int32 new_channel)
 : signal_browser_model_ (signal_browser_model),
   signal_event_ (signal_event),
   new_channel_ (new_channel)
{
    // nothing to do here
}

//-----------------------------------------------------------------------------
ChangeChannelUndoCommand::~ChangeChannelUndoCommand ()
{
    // nothing to do here
}

//-----------------------------------------------------------------------------
void ChangeChannelUndoCommand::undo ()
{
    signal_event_->setChannel(old_channel_);
    signal_browser_model_.setEventChanged(signal_event_->getId());
    checkAndSetSelectChannelState();
}

//-----------------------------------------------------------------------------
void ChangeChannelUndoCommand::redo ()
{
    old_channel_ = signal_event_->getChannel();
    signal_event_->setChannel(new_channel_);
    signal_browser_model_.setEventChanged(signal_event_->getId());
    checkAndSetSelectChannelState();
}

//-----------------------------------------------------------------------------
void ChangeChannelUndoCommand::checkAndSetSelectChannelState ()
{
    if (signal_event_->getChannel() == SignalEvent::UNDEFINED_CHANNEL)
        signal_browser_model_.getMainWindowModel().setSelectionState(MainWindowModel::SELECTION_STATE_ALL_CHANNELS);
    else
        signal_browser_model_.getMainWindowModel().setSelectionState(MainWindowModel::SELECTION_STATE_ONE_CHANNEL);
}

}
}
