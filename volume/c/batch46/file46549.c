// fichero 46549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46549;

Registro46549 crear_registro46549(int id) {
    Registro46549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46549(Registro46549 r) {
    return r.valor + r.id;
}
