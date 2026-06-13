// fichero 26089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26089;

Registro26089 crear_registro26089(int id) {
    Registro26089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26089(Registro26089 r) {
    return r.valor + r.id;
}
