// fichero 49337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49337;

Registro49337 crear_registro49337(int id) {
    Registro49337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49337(Registro49337 r) {
    return r.valor + r.id;
}
