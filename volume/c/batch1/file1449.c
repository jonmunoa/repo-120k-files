// fichero 1449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1449;

Registro1449 crear_registro1449(int id) {
    Registro1449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1449(Registro1449 r) {
    return r.valor + r.id;
}
