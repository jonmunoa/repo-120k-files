// fichero 8301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8301;

Registro8301 crear_registro8301(int id) {
    Registro8301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8301(Registro8301 r) {
    return r.valor + r.id;
}
