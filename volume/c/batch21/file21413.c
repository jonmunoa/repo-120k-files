// fichero 21413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21413;

Registro21413 crear_registro21413(int id) {
    Registro21413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21413(Registro21413 r) {
    return r.valor + r.id;
}
