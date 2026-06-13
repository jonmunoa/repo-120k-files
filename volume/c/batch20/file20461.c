// fichero 20461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20461;

Registro20461 crear_registro20461(int id) {
    Registro20461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20461(Registro20461 r) {
    return r.valor + r.id;
}
