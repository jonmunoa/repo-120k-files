// fichero 24065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24065;

Registro24065 crear_registro24065(int id) {
    Registro24065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24065(Registro24065 r) {
    return r.valor + r.id;
}
