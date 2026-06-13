// fichero 48397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48397;

Registro48397 crear_registro48397(int id) {
    Registro48397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48397(Registro48397 r) {
    return r.valor + r.id;
}
