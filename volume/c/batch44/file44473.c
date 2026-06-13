// fichero 44473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44473;

Registro44473 crear_registro44473(int id) {
    Registro44473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44473(Registro44473 r) {
    return r.valor + r.id;
}
