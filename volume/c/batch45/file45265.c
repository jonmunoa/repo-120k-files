// fichero 45265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45265;

Registro45265 crear_registro45265(int id) {
    Registro45265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45265(Registro45265 r) {
    return r.valor + r.id;
}
