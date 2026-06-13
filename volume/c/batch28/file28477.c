// fichero 28477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28477;

Registro28477 crear_registro28477(int id) {
    Registro28477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28477(Registro28477 r) {
    return r.valor + r.id;
}
