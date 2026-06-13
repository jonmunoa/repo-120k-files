// fichero 27485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27485;

Registro27485 crear_registro27485(int id) {
    Registro27485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27485(Registro27485 r) {
    return r.valor + r.id;
}
