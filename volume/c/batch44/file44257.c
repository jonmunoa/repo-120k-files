// fichero 44257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44257;

Registro44257 crear_registro44257(int id) {
    Registro44257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44257(Registro44257 r) {
    return r.valor + r.id;
}
