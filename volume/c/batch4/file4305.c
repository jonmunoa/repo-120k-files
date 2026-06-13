// fichero 4305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4305;

Registro4305 crear_registro4305(int id) {
    Registro4305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4305(Registro4305 r) {
    return r.valor + r.id;
}
