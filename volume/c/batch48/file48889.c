// fichero 48889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48889;

Registro48889 crear_registro48889(int id) {
    Registro48889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48889(Registro48889 r) {
    return r.valor + r.id;
}
