// fichero 17585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17585;

Registro17585 crear_registro17585(int id) {
    Registro17585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17585(Registro17585 r) {
    return r.valor + r.id;
}
