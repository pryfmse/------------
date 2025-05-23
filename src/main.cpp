// Подключаем основной класс приложения Qt
#include <QApplication>

// Подключаем заголовочный файл нашего главного окна
#include "mainwindow.h"

// Точка входа в приложение
int main(int argc, char *argv[]) {
    // 1. Создаем объект QApplication - ядро любого Qt-приложения
    //    - argc: счетчик аргументов командной строки
    //    - argv: массив аргументов командной строки
    //    - Управляет главным циклом обработки событий и настройками приложения
    QApplication app(argc, argv);
    
    // 2. Создаем экземпляр нашего главного окна
    //    - Конструктор по умолчанию (без родительского виджета)
    //    - Все виджеты Qt должны создаваться после QApplication
    MainWindow window;
    
    // 3. Отображаем главное окно
    //    - По умолчанию виджеты создаются скрытыми
    //    - show() делает окно видимым и активирует его
    window.show();
    
    // 4. Запускаем главный цикл обработки событий приложения
    //    - Блокирующий вызов, работает пока не будет вызван app.quit()
    //    - Обрабатывает пользовательский ввод, таймеры, сетевые события и т.д.
    //    - Возвращает код завершения приложения
    return app.exec();
    
    // Примечание: после завершения app.exec() все объекты Qt будут автоматически
    // удалены в правильном порядке благодаря системе родитель-потомок
} 