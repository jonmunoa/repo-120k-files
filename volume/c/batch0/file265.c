// fichero 265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro265;

Registro265 crear_registro265(int id) {
    Registro265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro265(Registro265 r) {
    return r.valor + r.id;
}
