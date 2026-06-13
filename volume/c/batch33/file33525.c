// fichero 33525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33525;

Registro33525 crear_registro33525(int id) {
    Registro33525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33525(Registro33525 r) {
    return r.valor + r.id;
}
