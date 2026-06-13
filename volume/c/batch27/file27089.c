// fichero 27089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27089;

Registro27089 crear_registro27089(int id) {
    Registro27089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27089(Registro27089 r) {
    return r.valor + r.id;
}
