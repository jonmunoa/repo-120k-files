// fichero 20421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20421;

Registro20421 crear_registro20421(int id) {
    Registro20421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20421(Registro20421 r) {
    return r.valor + r.id;
}
