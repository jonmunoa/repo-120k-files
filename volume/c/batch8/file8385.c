// fichero 8385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8385;

Registro8385 crear_registro8385(int id) {
    Registro8385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8385(Registro8385 r) {
    return r.valor + r.id;
}
