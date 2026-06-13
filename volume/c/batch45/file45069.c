// fichero 45069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45069;

Registro45069 crear_registro45069(int id) {
    Registro45069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45069(Registro45069 r) {
    return r.valor + r.id;
}
