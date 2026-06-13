// fichero 49493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49493;

Registro49493 crear_registro49493(int id) {
    Registro49493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49493(Registro49493 r) {
    return r.valor + r.id;
}
