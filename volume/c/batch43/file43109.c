// fichero 43109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43109;

Registro43109 crear_registro43109(int id) {
    Registro43109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43109(Registro43109 r) {
    return r.valor + r.id;
}
