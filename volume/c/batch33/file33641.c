// fichero 33641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33641;

Registro33641 crear_registro33641(int id) {
    Registro33641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33641(Registro33641 r) {
    return r.valor + r.id;
}
