// fichero 30577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30577;

Registro30577 crear_registro30577(int id) {
    Registro30577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30577(Registro30577 r) {
    return r.valor + r.id;
}
