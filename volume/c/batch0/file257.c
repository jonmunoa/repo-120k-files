// fichero 257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro257;

Registro257 crear_registro257(int id) {
    Registro257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro257(Registro257 r) {
    return r.valor + r.id;
}
