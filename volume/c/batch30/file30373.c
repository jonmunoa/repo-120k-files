// fichero 30373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30373;

Registro30373 crear_registro30373(int id) {
    Registro30373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30373(Registro30373 r) {
    return r.valor + r.id;
}
