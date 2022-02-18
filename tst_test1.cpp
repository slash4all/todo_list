#include <QtTest>
#include "../Qt_Projects/todo_list/date.cpp"


class DateTest : public QObject
{
    Q_OBJECT

public:
    DateTest();
    ~DateTest();

private slots:
    void test_valid_dates();
    void test_not_valid_dates();

private:

};

DateTest::DateTest()
{

}

DateTest::~DateTest()
{

}

void DateTest::test_valid_dates()
{
    Date d1 = Date(7,7,1996);
    QCOMPARE(d1.getDate(),"7/07/1996");
}

void DateTest::test_not_valid_dates()
{
    try {
        Date d1 = Date(1,0,18);
    }  catch (NotValidDateException& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Date d1 = Date(-12, 2, 22);
    }
    catch (NotValidDateException& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Date d1 = Date(28, 2, 2022);
    }  catch (NotValidDateException& e) {
        std::cerr << e.what() << std::endl;
    }
}

QTEST_APPLESS_MAIN(DateTest)
#include "tst_test1.moc"
