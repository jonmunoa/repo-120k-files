// fichero 32137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32137;

Registro32137 crear_registro32137(int id) {
    Registro32137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32137(Registro32137 r) {
    return r.valor + r.id;
}
