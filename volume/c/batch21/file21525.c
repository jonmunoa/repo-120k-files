// fichero 21525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21525;

Registro21525 crear_registro21525(int id) {
    Registro21525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21525(Registro21525 r) {
    return r.valor + r.id;
}
