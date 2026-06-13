// fichero 2365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2365;

Registro2365 crear_registro2365(int id) {
    Registro2365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2365(Registro2365 r) {
    return r.valor + r.id;
}
