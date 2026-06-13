// fichero 53337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53337;

Registro53337 crear_registro53337(int id) {
    Registro53337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53337(Registro53337 r) {
    return r.valor + r.id;
}
