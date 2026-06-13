// fichero 48149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48149;

Registro48149 crear_registro48149(int id) {
    Registro48149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48149(Registro48149 r) {
    return r.valor + r.id;
}
