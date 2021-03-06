/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_dialog1 (void)
{
  GtkWidget *dialog1;
  GtkWidget *dialog_vbox1;
  GtkWidget *notebook1;
  GtkWidget *vbox1;
  GtkWidget *eegeog1_chk;
  GtkWidget *eegeog2_chk;
  GtkWidget *eegeog3_chk;
  GtkWidget *eegeog4_chk;
  GtkWidget *label1;
  GtkWidget *vbox3;
  GtkWidget *ecgemg1_chk;
  GtkWidget *ecgemg2_chk;
  GtkWidget *label2;
  GtkWidget *vbox4;
  GtkWidget *analog1_chk;
  GtkWidget *analog2_chk;
  GtkWidget *label4;
  GtkWidget *vbox5;
  GtkWidget *digital1_chk;
  GtkWidget *digital2_chk;
  GtkWidget *label5;
  GtkWidget *vbox2;
  GtkWidget *hbox1;
  GtkWidget *label3;
  GtkWidget *devnode_entry;
  GtkWidget *button1;
  GtkWidget *image1;
  GtkWidget *label6;
  GtkWidget *dialog_action_area1;
  GtkWidget *okbutton1;

  dialog1 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1), _("g.mobilab config"));

  dialog_vbox1 = GTK_DIALOG (dialog1)->vbox;
  gtk_widget_show (dialog_vbox1);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), notebook1, TRUE, TRUE, 0);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox1);

  eegeog1_chk = gtk_check_button_new_with_mnemonic (_("Channel 1"));
  gtk_widget_show (eegeog1_chk);
  gtk_box_pack_start (GTK_BOX (vbox1), eegeog1_chk, FALSE, FALSE, 0);

  eegeog2_chk = gtk_check_button_new_with_mnemonic (_("Channel 2"));
  gtk_widget_show (eegeog2_chk);
  gtk_box_pack_start (GTK_BOX (vbox1), eegeog2_chk, FALSE, FALSE, 0);

  eegeog3_chk = gtk_check_button_new_with_mnemonic (_("Channel 3"));
  gtk_widget_show (eegeog3_chk);
  gtk_box_pack_start (GTK_BOX (vbox1), eegeog3_chk, FALSE, FALSE, 0);

  eegeog4_chk = gtk_check_button_new_with_mnemonic (_("Channel 4"));
  gtk_widget_show (eegeog4_chk);
  gtk_box_pack_start (GTK_BOX (vbox1), eegeog4_chk, FALSE, FALSE, 0);

  label1 = gtk_label_new (_("EEG/EOG"));
  gtk_widget_show (label1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label1);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox3);

  ecgemg1_chk = gtk_check_button_new_with_mnemonic (_("Channel 1"));
  gtk_widget_show (ecgemg1_chk);
  gtk_box_pack_start (GTK_BOX (vbox3), ecgemg1_chk, FALSE, FALSE, 0);

  ecgemg2_chk = gtk_check_button_new_with_mnemonic (_("Channel 2"));
  gtk_widget_show (ecgemg2_chk);
  gtk_box_pack_start (GTK_BOX (vbox3), ecgemg2_chk, FALSE, FALSE, 0);

  label2 = gtk_label_new (_("ECG/EMG"));
  gtk_widget_show (label2);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label2);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox4);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox4);

  analog1_chk = gtk_check_button_new_with_mnemonic (_("Channel 1"));
  gtk_widget_show (analog1_chk);
  gtk_box_pack_start (GTK_BOX (vbox4), analog1_chk, FALSE, FALSE, 0);

  analog2_chk = gtk_check_button_new_with_mnemonic (_("Channel 2"));
  gtk_widget_show (analog2_chk);
  gtk_box_pack_start (GTK_BOX (vbox4), analog2_chk, FALSE, FALSE, 0);

  label4 = gtk_label_new (_("Analog"));
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label4);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox5);

  digital1_chk = gtk_check_button_new_with_mnemonic (_("Channel 1"));
  gtk_widget_show (digital1_chk);
  gtk_box_pack_start (GTK_BOX (vbox5), digital1_chk, FALSE, FALSE, 0);

  digital2_chk = gtk_check_button_new_with_mnemonic (_("Channel 2"));
  gtk_widget_show (digital2_chk);
  gtk_box_pack_start (GTK_BOX (vbox5), digital2_chk, FALSE, FALSE, 0);

  label5 = gtk_label_new (_("Digital"));
  gtk_widget_show (label5);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 3), label5);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (notebook1), vbox2);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox2), hbox1, FALSE, FALSE, 0);

  label3 = gtk_label_new (_("Device Node: "));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox1), label3, FALSE, FALSE, 0);

  devnode_entry = gtk_entry_new ();
  gtk_widget_show (devnode_entry);
  gtk_box_pack_start (GTK_BOX (hbox1), devnode_entry, TRUE, TRUE, 0);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_box_pack_start (GTK_BOX (hbox1), button1, FALSE, FALSE, 0);

  image1 = gtk_image_new_from_stock ("gtk-floppy", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_container_add (GTK_CONTAINER (button1), image1);

  label6 = gtk_label_new (_("General"));
  gtk_widget_show (label6);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 4), label6);

  dialog_action_area1 = GTK_DIALOG (dialog1)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  okbutton1 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), okbutton1, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) dialog1, "delete_event",
                    G_CALLBACK (update_config),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (run_fileselect),
                    NULL);
  g_signal_connect ((gpointer) okbutton1, "clicked",
                    G_CALLBACK (update_config),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog1, "dialog1");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (dialog1, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (dialog1, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (dialog1, eegeog1_chk, "eegeog1_chk");
  GLADE_HOOKUP_OBJECT (dialog1, eegeog2_chk, "eegeog2_chk");
  GLADE_HOOKUP_OBJECT (dialog1, eegeog3_chk, "eegeog3_chk");
  GLADE_HOOKUP_OBJECT (dialog1, eegeog4_chk, "eegeog4_chk");
  GLADE_HOOKUP_OBJECT (dialog1, label1, "label1");
  GLADE_HOOKUP_OBJECT (dialog1, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (dialog1, ecgemg1_chk, "ecgemg1_chk");
  GLADE_HOOKUP_OBJECT (dialog1, ecgemg2_chk, "ecgemg2_chk");
  GLADE_HOOKUP_OBJECT (dialog1, label2, "label2");
  GLADE_HOOKUP_OBJECT (dialog1, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (dialog1, analog1_chk, "analog1_chk");
  GLADE_HOOKUP_OBJECT (dialog1, analog2_chk, "analog2_chk");
  GLADE_HOOKUP_OBJECT (dialog1, label4, "label4");
  GLADE_HOOKUP_OBJECT (dialog1, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (dialog1, digital1_chk, "digital1_chk");
  GLADE_HOOKUP_OBJECT (dialog1, digital2_chk, "digital2_chk");
  GLADE_HOOKUP_OBJECT (dialog1, label5, "label5");
  GLADE_HOOKUP_OBJECT (dialog1, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (dialog1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (dialog1, label3, "label3");
  GLADE_HOOKUP_OBJECT (dialog1, devnode_entry, "devnode_entry");
  GLADE_HOOKUP_OBJECT (dialog1, button1, "button1");
  GLADE_HOOKUP_OBJECT (dialog1, image1, "image1");
  GLADE_HOOKUP_OBJECT (dialog1, label6, "label6");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (dialog1, okbutton1, "okbutton1");

  return dialog1;
}

GtkWidget*
create_fileselection1 (void)
{
  GtkWidget *fileselection1;
  GtkWidget *ok_button1;
  GtkWidget *cancel_button1;

  fileselection1 = gtk_file_selection_new (_("Select File"));
  gtk_container_set_border_width (GTK_CONTAINER (fileselection1), 10);

  ok_button1 = GTK_FILE_SELECTION (fileselection1)->ok_button;
  gtk_widget_show (ok_button1);
  GTK_WIDGET_SET_FLAGS (ok_button1, GTK_CAN_DEFAULT);

  cancel_button1 = GTK_FILE_SELECTION (fileselection1)->cancel_button;
  gtk_widget_show (cancel_button1);
  GTK_WIDGET_SET_FLAGS (cancel_button1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) fileselection1, "close",
                    G_CALLBACK (close_file_select),
                    NULL);
  g_signal_connect ((gpointer) ok_button1, "clicked",
                    G_CALLBACK (update_file_select),
                    NULL);
  g_signal_connect ((gpointer) cancel_button1, "clicked",
                    G_CALLBACK (close_file_select),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fileselection1, fileselection1, "fileselection1");
  GLADE_HOOKUP_OBJECT_NO_REF (fileselection1, ok_button1, "ok_button1");
  GLADE_HOOKUP_OBJECT_NO_REF (fileselection1, cancel_button1, "cancel_button1");

  return fileselection1;
}

