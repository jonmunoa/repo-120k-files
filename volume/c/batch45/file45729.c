// fichero 45729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45729;

Registro45729 crear_registro45729(int id) {
    Registro45729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45729(Registro45729 r) {
    return r.valor + r.id;
}
