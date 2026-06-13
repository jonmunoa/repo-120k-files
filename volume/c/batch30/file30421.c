// fichero 30421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30421;

Registro30421 crear_registro30421(int id) {
    Registro30421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30421(Registro30421 r) {
    return r.valor + r.id;
}
