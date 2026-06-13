// fichero 48613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48613;

Registro48613 crear_registro48613(int id) {
    Registro48613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48613(Registro48613 r) {
    return r.valor + r.id;
}
