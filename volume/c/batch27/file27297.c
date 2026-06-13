// fichero 27297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27297;

Registro27297 crear_registro27297(int id) {
    Registro27297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27297(Registro27297 r) {
    return r.valor + r.id;
}
