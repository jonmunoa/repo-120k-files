// fichero 45193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45193;

Registro45193 crear_registro45193(int id) {
    Registro45193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45193(Registro45193 r) {
    return r.valor + r.id;
}
