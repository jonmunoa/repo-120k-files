// fichero 15961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15961;

Registro15961 crear_registro15961(int id) {
    Registro15961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15961(Registro15961 r) {
    return r.valor + r.id;
}
