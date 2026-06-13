// fichero 389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro389;

Registro389 crear_registro389(int id) {
    Registro389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro389(Registro389 r) {
    return r.valor + r.id;
}
