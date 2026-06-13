// fichero 48513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48513;

Registro48513 crear_registro48513(int id) {
    Registro48513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48513(Registro48513 r) {
    return r.valor + r.id;
}
