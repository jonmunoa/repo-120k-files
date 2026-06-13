// fichero 46937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46937;

Registro46937 crear_registro46937(int id) {
    Registro46937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46937(Registro46937 r) {
    return r.valor + r.id;
}
