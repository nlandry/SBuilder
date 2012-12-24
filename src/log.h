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

#ifndef LOG_H
#define LOG_H

#include <QDialog>

class QTextEdit;
class QPushButton;
class QVBoxLayout;
class QHBoxLayout;

class Log : public QDialog
{
    Q_OBJECT
public:
    explicit Log(QWidget *parent = 0);

signals:

public slots:
    void addMsg(const QString &msg);

private:
    QTextEdit *m_log;
    QPushButton *m_hideButton;
    QPushButton *m_clearButton;
    QVBoxLayout *m_mainLayout;
    QHBoxLayout *m_buttonLayout;
};

#endif // LOG_H