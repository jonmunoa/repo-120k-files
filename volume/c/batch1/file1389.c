// fichero 1389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1389;

Registro1389 crear_registro1389(int id) {
    Registro1389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1389(Registro1389 r) {
    return r.valor + r.id;
}
