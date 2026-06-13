// fichero 48281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48281;

Registro48281 crear_registro48281(int id) {
    Registro48281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48281(Registro48281 r) {
    return r.valor + r.id;
}
