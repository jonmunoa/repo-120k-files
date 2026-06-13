// fichero 38217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38217;

Registro38217 crear_registro38217(int id) {
    Registro38217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38217(Registro38217 r) {
    return r.valor + r.id;
}
