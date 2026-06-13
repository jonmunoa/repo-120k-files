// fichero 38525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38525;

Registro38525 crear_registro38525(int id) {
    Registro38525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38525(Registro38525 r) {
    return r.valor + r.id;
}
