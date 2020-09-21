#include "connection_pool.h"
#include "public.h"
using namespace std;

int main()
{
    clock_t begin = clock();
#if 0
    ConnectionPool *cp = ConnectionPool::getConnectionPool();
    for(int i = 0; i < 10000; ++i)
    {
        char sql[1024] = {0};
        sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
        shared_ptr<Connection> sp = cp->getConnection();
        sp->update(sql);

        /*
        Connection conn;
        char sql[1024] = {0};
        sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
        if(!conn.connect("192.168.75.19", 3306, "root", "a", "test"))
        {
                cout << "CONNECT FALSE" << endl;
        }
        conn.update(sql);
        */
    }
#endif

    /*
    Connection conn;
    conn.connect("192.168.75.19", 3306, "root", "a", "test");    
    */

    thread t1([](){
        ConnectionPool *cp = ConnectionPool::getConnectionPool();
    for(int i = 0; i < 250; ++i)
        {
            
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            shared_ptr<Connection> sp = cp->getConnection();
            sp->update(sql);
            
            /*
            Connection conn;
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            if(!conn.connect("192.168.75.19", 3306, "root", "a", "test"))
            {
                cout << "CONNECT FALSE" << endl;
            }
            conn.update(sql);
            */
        }  
    });
    
    thread t2([](){
        ConnectionPool *cp = ConnectionPool::getConnectionPool();
    for(int i = 0; i < 250; ++i)
        {
            
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            shared_ptr<Connection> sp = cp->getConnection();
            sp->update(sql);
            
            /*
            Connection conn;
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            if(!conn.connect("192.168.75.19", 3306, "root", "a", "test"))
            {
                cout << "CONNECT FALSE" << endl;
            }
            conn.update(sql);
            */
        }  
    });

    thread t3([](){
        ConnectionPool *cp = ConnectionPool::getConnectionPool();
    for(int i = 0; i < 250; ++i)
        {
            
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            shared_ptr<Connection> sp = cp->getConnection();
            sp->update(sql);
            
            /*
            Connection conn;
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            if(!conn.connect("192.168.75.19", 3306, "root", "a", "test"))
            {
                cout << "CONNECT FALSE" << endl;
            }
            conn.update(sql);
            */
        }  
    });

    thread t4([](){
        ConnectionPool *cp = ConnectionPool::getConnectionPool();
    for(int i = 0; i < 250; ++i)
        {
            
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            shared_ptr<Connection> sp = cp->getConnection();
            sp->update(sql);
            
            /*
            Connection conn;
            char sql[1024] = {0};
            sprintf(sql, "insert into user(name,age,sex) values('%s',%d,'%s')", "zhang san", 20, "male");
            if(!conn.connect("192.168.75.19", 3306, "root", "a", "test"))
            {
                cout << "CONNECT FALSE" << endl;
            }
            conn.update(sql);
            */
        }  
    });
  
    t1.join();
    t2.join();
    t3.join();
    t4.join();

    clock_t end = clock();
    cout << "time use: " << 1000 * (end - begin) / (double)CLOCKS_PER_SEC << "ms" << endl;
    return 0;
}