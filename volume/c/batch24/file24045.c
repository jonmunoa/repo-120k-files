// fichero 24045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24045;

Registro24045 crear_registro24045(int id) {
    Registro24045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24045(Registro24045 r) {
    return r.valor + r.id;
}
