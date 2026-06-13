// fichero 44601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44601;

Registro44601 crear_registro44601(int id) {
    Registro44601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44601(Registro44601 r) {
    return r.valor + r.id;
}
