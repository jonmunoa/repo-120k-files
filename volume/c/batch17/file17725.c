// fichero 17725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17725;

Registro17725 crear_registro17725(int id) {
    Registro17725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17725(Registro17725 r) {
    return r.valor + r.id;
}
