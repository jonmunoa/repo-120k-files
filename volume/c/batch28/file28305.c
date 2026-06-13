// fichero 28305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28305;

Registro28305 crear_registro28305(int id) {
    Registro28305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28305(Registro28305 r) {
    return r.valor + r.id;
}
