// fichero 48365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48365;

Registro48365 crear_registro48365(int id) {
    Registro48365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48365(Registro48365 r) {
    return r.valor + r.id;
}
