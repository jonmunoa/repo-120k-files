// fichero 15217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15217;

Registro15217 crear_registro15217(int id) {
    Registro15217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15217(Registro15217 r) {
    return r.valor + r.id;
}
