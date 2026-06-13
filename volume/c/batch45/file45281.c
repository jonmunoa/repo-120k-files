// fichero 45281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45281;

Registro45281 crear_registro45281(int id) {
    Registro45281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45281(Registro45281 r) {
    return r.valor + r.id;
}
