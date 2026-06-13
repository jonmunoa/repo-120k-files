// fichero 45801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45801;

Registro45801 crear_registro45801(int id) {
    Registro45801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45801(Registro45801 r) {
    return r.valor + r.id;
}
