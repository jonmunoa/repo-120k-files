// fichero 32373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32373;

Registro32373 crear_registro32373(int id) {
    Registro32373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32373(Registro32373 r) {
    return r.valor + r.id;
}
