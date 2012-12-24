/* Copyright 2011 Research In Motion Limited.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BLOBVIEWERDIALOG_H
#define BLOBVIEWERDIALOG_H

#include <QDialog>
#include <QSharedPointer>
#include "sqlite.h"

namespace Ui {
    class BlobViewerDialog;
}

class BlobViewerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BlobViewerDialog(QWidget *parent = 0);
    ~BlobViewerDialog();

    bool useCell(QSharedPointer<SQLite> pDb, const QString &db, const QString &table, const QString &column, int rowid);

private:
    Ui::BlobViewerDialog *ui;
};

#endif // BLOBVIEWERDIALOG_H
