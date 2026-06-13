// fichero 46369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46369;

Registro46369 crear_registro46369(int id) {
    Registro46369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46369(Registro46369 r) {
    return r.valor + r.id;
}
