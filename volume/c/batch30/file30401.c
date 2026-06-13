// fichero 30401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30401;

Registro30401 crear_registro30401(int id) {
    Registro30401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30401(Registro30401 r) {
    return r.valor + r.id;
}
