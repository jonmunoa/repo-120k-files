// fichero 28213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28213;

Registro28213 crear_registro28213(int id) {
    Registro28213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28213(Registro28213 r) {
    return r.valor + r.id;
}
