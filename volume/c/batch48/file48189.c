// fichero 48189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48189;

Registro48189 crear_registro48189(int id) {
    Registro48189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48189(Registro48189 r) {
    return r.valor + r.id;
}
