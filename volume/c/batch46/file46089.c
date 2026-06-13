// fichero 46089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46089;

Registro46089 crear_registro46089(int id) {
    Registro46089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46089(Registro46089 r) {
    return r.valor + r.id;
}
