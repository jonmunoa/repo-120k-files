// fichero 45217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45217;

Registro45217 crear_registro45217(int id) {
    Registro45217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45217(Registro45217 r) {
    return r.valor + r.id;
}
