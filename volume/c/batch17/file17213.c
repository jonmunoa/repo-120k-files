// fichero 17213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17213;

Registro17213 crear_registro17213(int id) {
    Registro17213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17213(Registro17213 r) {
    return r.valor + r.id;
}
