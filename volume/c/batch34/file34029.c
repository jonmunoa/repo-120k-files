// fichero 34029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34029;

Registro34029 crear_registro34029(int id) {
    Registro34029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34029(Registro34029 r) {
    return r.valor + r.id;
}
