// fichero 32197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32197;

Registro32197 crear_registro32197(int id) {
    Registro32197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32197(Registro32197 r) {
    return r.valor + r.id;
}
