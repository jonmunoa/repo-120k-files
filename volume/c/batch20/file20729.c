// fichero 20729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20729;

Registro20729 crear_registro20729(int id) {
    Registro20729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20729(Registro20729 r) {
    return r.valor + r.id;
}
