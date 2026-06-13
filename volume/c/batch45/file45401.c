// fichero 45401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45401;

Registro45401 crear_registro45401(int id) {
    Registro45401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45401(Registro45401 r) {
    return r.valor + r.id;
}
