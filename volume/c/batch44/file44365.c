// fichero 44365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44365;

Registro44365 crear_registro44365(int id) {
    Registro44365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44365(Registro44365 r) {
    return r.valor + r.id;
}
