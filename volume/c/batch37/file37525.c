// fichero 37525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37525;

Registro37525 crear_registro37525(int id) {
    Registro37525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37525(Registro37525 r) {
    return r.valor + r.id;
}
