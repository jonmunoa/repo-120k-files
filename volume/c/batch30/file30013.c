// fichero 30013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30013;

Registro30013 crear_registro30013(int id) {
    Registro30013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30013(Registro30013 r) {
    return r.valor + r.id;
}
