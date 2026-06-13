// fichero 45261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45261;

Registro45261 crear_registro45261(int id) {
    Registro45261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45261(Registro45261 r) {
    return r.valor + r.id;
}
