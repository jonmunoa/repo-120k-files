// fichero 253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro253;

Registro253 crear_registro253(int id) {
    Registro253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro253(Registro253 r) {
    return r.valor + r.id;
}
