// fichero 44097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44097;

Registro44097 crear_registro44097(int id) {
    Registro44097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44097(Registro44097 r) {
    return r.valor + r.id;
}
