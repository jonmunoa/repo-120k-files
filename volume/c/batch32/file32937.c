// fichero 32937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32937;

Registro32937 crear_registro32937(int id) {
    Registro32937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32937(Registro32937 r) {
    return r.valor + r.id;
}
