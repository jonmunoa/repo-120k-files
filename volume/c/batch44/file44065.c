// fichero 44065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44065;

Registro44065 crear_registro44065(int id) {
    Registro44065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44065(Registro44065 r) {
    return r.valor + r.id;
}
