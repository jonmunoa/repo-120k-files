// fichero 32193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32193;

Registro32193 crear_registro32193(int id) {
    Registro32193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32193(Registro32193 r) {
    return r.valor + r.id;
}
