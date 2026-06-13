// fichero 53561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53561;

Registro53561 crear_registro53561(int id) {
    Registro53561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53561(Registro53561 r) {
    return r.valor + r.id;
}
