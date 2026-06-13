// fichero 43373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43373;

Registro43373 crear_registro43373(int id) {
    Registro43373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43373(Registro43373 r) {
    return r.valor + r.id;
}
