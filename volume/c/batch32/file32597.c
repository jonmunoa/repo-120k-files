// fichero 32597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32597;

Registro32597 crear_registro32597(int id) {
    Registro32597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32597(Registro32597 r) {
    return r.valor + r.id;
}
