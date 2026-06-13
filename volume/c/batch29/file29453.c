// fichero 29453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29453;

Registro29453 crear_registro29453(int id) {
    Registro29453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29453(Registro29453 r) {
    return r.valor + r.id;
}
