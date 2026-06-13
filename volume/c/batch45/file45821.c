// fichero 45821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45821;

Registro45821 crear_registro45821(int id) {
    Registro45821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45821(Registro45821 r) {
    return r.valor + r.id;
}
