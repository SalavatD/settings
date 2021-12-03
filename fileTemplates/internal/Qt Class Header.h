#parse("C File Header.h")
#pragma once

#[[#include]]# <${PARENT_CLASS}>

${USER_BEGIN_NAMESPACE}
QT_BEGIN_NAMESPACE
namespace Ui { class ${NAME}; }
QT_END_NAMESPACE

class ${NAME} : public ${PARENT_CLASS} {
Q_OBJECT

public:
    explicit ${NAME}(QWidget *parent = nullptr);
    ~${NAME}() override;

private:
    Ui::${NAME} *ui;
};
${USER_END_NAMESPACE}
