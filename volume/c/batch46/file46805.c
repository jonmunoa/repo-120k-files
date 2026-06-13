// fichero 46805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46805;

Registro46805 crear_registro46805(int id) {
    Registro46805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46805(Registro46805 r) {
    return r.valor + r.id;
}
