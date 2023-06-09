/************************************************************************
**
**  Copyright (C) 2015-2020 Kevin B. Hendricks, Stratford Ontario Canada
**  Copyright (C) 2011      John Schember <john@nachtimwald.com>
**  Copyright (C) 2012      Dave Heiland
**
**  This file is part of Sigil.
**
**  Sigil is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  Sigil is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Sigil.  If not, see <http://www.gnu.org/licenses/>.
**
*************************************************************************/

#pragma once
#ifndef GENERALSETTINGSWIDGET_H
#define GENERALSETTINGSWIDGET_H

#include "PreferencesWidget.h"
#include "Misc/SettingsStore.h"
#include "ui_PGeneralSettingsWidget.h"

/**
 * Preferences widget for clean source code related items
 */
class GeneralSettingsWidget : public PreferencesWidget
{
    Q_OBJECT

public:
    GeneralSettingsWidget();
    PreferencesWidget::ResultActions saveSettings();

private slots:
    void autoTempFolder();
    void setTempFolder();
    void tempFolderPathChanged();

    void clearXEditorPath();
    void setXEditorPath();
    void XEditorPathChanged();

    void clipLimitValueChanged();

private:
    bool m_refreshClipboardHistoryLimit;
    void readSettings();
    void ExtendUI();
    void connectSignalsToSlots();

    bool m_disable_gpu;
    Ui::GeneralSettingsWidget ui;
};

#endif // GENERALSETTINGSWIDGET_H
