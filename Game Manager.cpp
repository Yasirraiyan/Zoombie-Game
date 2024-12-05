class GM {
public:
    int num;
    bool attack = false;
    bool fire = false;
    bool shoot = false;
    int life = 5;
    int score = 0;
    int x;
    int y;
    int z;
    bool kill = false;
    bool hit = false;
     int attempt=10;

    
   GM(int n, bool atk, bool fr, bool sht, int l, int scr, int x_pos, int y_pos, int z_pos, bool kl, bool ht) 
        : 
        num(n), 
        attack(atk), 
        fire(fr), 
        shoot(sht), 
        life(l), 
        score(scr), 
        x(x_pos), 
        y(y_pos), 
        z(z_pos), 
        kill(kl), 
        hit(ht) 
        {
            
        }
        std::string getPositionIn2D(int x, int y) 
        { 
            std::string position; 
            if (x == 0 && y == 0) 
            { 
                position = "The position is at the origin (0,0).";
                } 
                else if (x > 0 && y > 0)
                { 
                    position = "The position is in the first quadrant."; 
                    
                } 
                else if (x < 0 && y > 0) 
                { 
                    position = "The position is in the second quadrant."; 
                    
                } 
                else if (x < 0 && y < 0) 
                { 
                    position = "The position is in the third quadrant."; 
                    
                } 
                else if (x > 0 && y < 0) 
                { 
                    position = "The position is in the fourth quadrant.";
                    } 
                    else if (x == 0 && y > 0)
                    { 
                        position = "The position is on the positive y-axis."; 
                        
                    } 
                    else if (x == 0 && y < 0)
                    {
                        position = "The position is on the negative y-axis."; 
                        
                    } 
                    else if (y == 0 && x > 0)
                    { 
                        position = "The position is on the positive x-axis."; 
                        
                    } 
                    else if (y == 0 && x < 0) 
                    { 
                        position = "The position is on the negative x-axis."; 
                        
                    } else 
                    { 
                        position = "The position is somewhere in the 2D plane."; 
                        
                    } 
                    return position; 
            
        }
        std::string getPositionIn3D(int x, int y, int z)
        { 
            std::string position; 
            if (x == 0 && y == 0 && z == 0) 
            { 
                position = "The position is at the origin (0,0,0)."; 
                
            } 
            else if (x > 0 && y > 0 && z > 0)
            { 
                position = "The position is in the first octant."; 
                
            } 
            else if (x < 0 && y > 0 && z > 0)
            { 
                position = "The position is in the second octant."; 
                
            } 
            else if (x < 0 && y < 0 && z > 0) 
            { 
                position = "The position is in the third octant."; 
                
            } 
            else if (x > 0 && y < 0 && z > 0)
            { 
                position = "The position is in the fourth octant.";
            } 
            else if (x > 0 && y > 0 && z < 0) 
            {
                position = "The position is in the fifth octant.";
            } 
            else if (x < 0 && y > 0 && z < 0)
            { 
                position = "The position is in the sixth octant."; 
                
            } 
            else if (x < 0 && y < 0 && z < 0) 
            {
                position = "The position is in the seventh octant."; 
                
            } 
            else if (x > 0 && y < 0 && z < 0) 
            {
                position = "The position is in the eighth octant."; 
                
            } 
            else if (x == 0 && y == 0) 
            { 
                position = "The position is on the z-axis."; 
                
            } 
            else if (x == 0 && z == 0) 
            { 
                position = "The position is on the y-axis."; 
                
            } 
            else if (y == 0 && z == 0) 
            { 
                position = "The position is on the x-axis."; 
                
            } 
            else if (x == 0 && y > 0 && z > 0)
            { 
                position = "The position is on the positive y-z plane."; 
                
            }
            else if (x == 0 && y > 0 && z < 0) 
            { 
                position = "The position is on the positive y-negative z plane."; 
                
            } 
            else if (x == 0 && y < 0 && z > 0) 
            { 
                position = "The position is on the negative y-positive z plane."; 
                
            } 
            else if (x == 0 && y < 0 && z < 0)
            { 
                position = "The position is on the negative y-z plane.";
                } 
                else if (y == 0 && x > 0 && z > 0) 
                { 
                    position = "The position is on the positive x-z plane."; 
                    
                } 
                else if (y == 0 && x > 0 && z < 0) 
                { 
                    position = "The position is on the positive x-negative z plane."; 
                    
                }
                else if (y == 0 && x < 0 && z > 0) 
                { 
                    position = "The position is on the negative x-positive z plane.";
                    } 
                    else if (y == 0 && x < 0 && z < 0)
                    { 
                        position = "The position is on the negative x-z plane.";
                        } 
                        else if (z == 0 && x > 0 && y > 0)
                        {
                            position = "The position is on the positive x-y plane."; 
                            
                        } 
                        else if (z == 0 && x > 0 && y < 0)
                        { 
                            position = "The position is on the positive x-negative y plane.";
                            } 
                            else if (z == 0 && x < 0 && y > 0) 
                            {
                                position = "The position is on the negative x-positive y plane.";
                                } 
                                else if (z == 0 && x < 0 && y < 0) 
                                { 
                                    position = "The position is on the negative x-y plane.";
                                    }
                                    else 
                                    { 
                                        position = "The position is somewhere in the 3D space."; 
                                        
                                    } 
                                    return position;
                                    }
        std:: void getattack()
        {
            while(life>0&&!hit)
            {
                attack=true;
                life--;
                score+=5;
                cout<<"Present life:"<<life<<"Attacked!"<<"Score:"<<score<<endl;
            }
            if(life==0||!hit||!kill)
            {
                cout<<"Killed!"<<endl;
            }
        }
        
        std:: void getfire()
        {
            while(life>0&&!fire&&attempt>0)
            {
                fire=true;
                life-=2;
                score+=10;
                attempt--;
                cout<<"Present life:"<<life<<"Fired!"<<"Score:"<<score<<"Remaining attempt:"<<attempt<<endl;
            }
            if(life==0||!hit||!kill)
            {
                cout<<"Killed!"<<endl;
            }
        }
        std:: void getshoot()
        {
            while(life>0&&!shoot)
            {
                shoot=true;
                life/=5;
                score+=15;
                attempt-=2;
                cout<<"Present life:"<<life<<"Shooted!"<<"Score:"<<score<<endl;
            }
            if(life==0||!hit||!kill)
            {
                cout<<"Killed!"<<endl;
            }
        }
        std:: void getkill()
        {
            while(life>0&&!killed)
            {
                killed=true;
                life=0;
                score*=20;
                attempt-=4;
                cout<<"Present life:"<<life<<"Killed!"<<"Score:"<<score<<endl;
            }
            if(life==0||!hit||!kill)
            {
                cout<<"Killed!"<<endl;
            }
        }
        std:: void gethit()
        {
            while(life>0&&!hit)
            {
                hit=true;
                life--;
                score+=5;
                attempt--;
                cout<<"Present life:"<<life<<"Hitted!"<<"Score:"<<score<<endl;
            }
            if(life==0||!hit||!kill)
            {
                cout<<"Killed!"<<endl;
            }
        }
        std::string getNumOfBullet(int num)
        { 
            std::string result; 
            if (num > 0 && num <= 10)
            {
                result = "There are a few bullets.";
                } 
                else if (num > 10 && num <= 50) 
                {
                    result = "There are several bullets.";
                    }
                    else if (num > 50 && num <= 100)
                    { 
                        result = "There are many bullets."; 
                        
                    } 
                    else if (num > 100) 
                    { 
                        result = "There are a lot of bullets.";
                        } 
                        else
                        { 
                            result = "There are no bullets."; 
                            
                        } 
                        return result; 
            
        }
        std:: void getattempt()
        {
            while(life>0&&!fire)
            {
                fire=true;
                life-=2;
                score+=10;
                attempt--;
                cout<<"Present life:"<<life<<"Fired!"<<"Score:"<<score<<"Remaining attempt:"<<attempt<<endl;
            }
            if(life==0||!hit||!kill)
            {
                cout<<"Killed!"<<endl;
            }
            if(attempt==0)
            {
                cout<<"Endedd.Because attempt is 0.There is no attempt remaining"<<attempt<<endl;
            }
        }
        
        
        
};
