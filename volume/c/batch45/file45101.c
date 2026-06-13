// fichero 45101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45101;

Registro45101 crear_registro45101(int id) {
    Registro45101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45101(Registro45101 r) {
    return r.valor + r.id;
}
