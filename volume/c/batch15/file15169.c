// fichero 15169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15169;

Registro15169 crear_registro15169(int id) {
    Registro15169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15169(Registro15169 r) {
    return r.valor + r.id;
}
