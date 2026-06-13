// fichero 8049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8049;

Registro8049 crear_registro8049(int id) {
    Registro8049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8049(Registro8049 r) {
    return r.valor + r.id;
}
