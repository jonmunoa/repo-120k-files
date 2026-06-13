// fichero 4677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4677;

Registro4677 crear_registro4677(int id) {
    Registro4677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4677(Registro4677 r) {
    return r.valor + r.id;
}
