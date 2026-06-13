// fichero 43709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43709;

Registro43709 crear_registro43709(int id) {
    Registro43709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43709(Registro43709 r) {
    return r.valor + r.id;
}
