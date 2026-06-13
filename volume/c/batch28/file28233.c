// fichero 28233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28233;

Registro28233 crear_registro28233(int id) {
    Registro28233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28233(Registro28233 r) {
    return r.valor + r.id;
}
