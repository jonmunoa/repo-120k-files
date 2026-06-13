// fichero 44525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44525;

Registro44525 crear_registro44525(int id) {
    Registro44525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44525(Registro44525 r) {
    return r.valor + r.id;
}
