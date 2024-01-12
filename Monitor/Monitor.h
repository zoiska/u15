//
// Created by zoisk on 12.01.24.
//
#include <string>
#include <iostream>

#ifndef $MONITOR_H
#define $MONITOR_H


class Monitor {
private:
    std::string Hersteller;
    int Baujahr;
    double Bilddiagonale;
    int maximale_x_Aufloesung;
    int maximale_y_Aufloesung;
    int aktuelle_x_Aufloeseung;
    int aktuelle_y_Aufloesung;
public:
    Monitor(std::string Hersteller, int Baujahr, double Bildsiagonale, int maximale_x_Aufloesung,
    int maximale_y_Aufloesung);
    std::string get_Hersteller();
    int get_Baujahr() const;
    double get_Bilddiagonale() const;
    int get_maximale_x_aufloesung() const;
    int get_maximale_y_aufloesung() const;
    int get_aktuelle_x_aufloesung() const;
    int get_aktuelle_y_aufloesung() const;
    void set_auktuelle_x_aufloesung(int num);
    void set_aktuelle_y_aufloesung(int num);
    void drucke();

};


#endif //$MONITOR_H
