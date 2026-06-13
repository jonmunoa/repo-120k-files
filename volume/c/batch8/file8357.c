// fichero 8357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8357;

Registro8357 crear_registro8357(int id) {
    Registro8357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8357(Registro8357 r) {
    return r.valor + r.id;
}
