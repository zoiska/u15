//
// Created by zoisk on 12.01.24.
//

#include "Monitor.h"

Monitor::Monitor(std::string Hersteller, int Baujahr, double Bilddiagonale, int maximale_x_Aufloesung, int maximale_y_Aufloesung) {
    this-> Hersteller = Hersteller;
    this->Baujahr = Baujahr;
    this->Bilddiagonale = Bilddiagonale;
    this->maximale_x_Aufloesung = maximale_x_Aufloesung;
    this->maximale_y_Aufloesung = maximale_y_Aufloesung;
}

std::string Monitor::get_Hersteller() {
    return Hersteller;
}

int Monitor::get_Baujahr() const {
    return Baujahr;
}

double Monitor::get_Bilddiagonale() const {
    return Bilddiagonale;
}

int Monitor::get_maximale_x_aufloesung() const {
    return maximale_x_Aufloesung;
}

int Monitor::get_maximale_y_aufloesung() const {
    return maximale_y_Aufloesung;
}

int Monitor::get_aktuelle_x_aufloesung() const {
    return aktuelle_x_Aufloeseung;
}

int Monitor::get_aktuelle_y_aufloesung() const {
    return aktuelle_y_Aufloesung;
}

void Monitor::set_auktuelle_x_aufloesung(int num) {
    this->aktuelle_y_Aufloesung = num;
}

void Monitor::set_aktuelle_y_aufloesung(int num) {
    this->aktuelle_y_Aufloesung = num;
}

void Monitor::drucke() {
    std::cout << "Hersteller: " << Hersteller << "\nBaujahr: " << Baujahr << "\nBilddiagonale: " << Bilddiagonale
    << "\nMaximale X Aufloesung: " << maximale_x_Aufloesung << "\nMaximale Y Aufloesung: " << maximale_y_Aufloesung
    << std::endl;
}
