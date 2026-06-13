// fichero 42369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42369;

Registro42369 crear_registro42369(int id) {
    Registro42369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42369(Registro42369 r) {
    return r.valor + r.id;
}
