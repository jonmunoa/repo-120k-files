// fichero 24049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24049;

Registro24049 crear_registro24049(int id) {
    Registro24049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24049(Registro24049 r) {
    return r.valor + r.id;
}
