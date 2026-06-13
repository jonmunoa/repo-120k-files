// fichero 32085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32085;

Registro32085 crear_registro32085(int id) {
    Registro32085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32085(Registro32085 r) {
    return r.valor + r.id;
}
