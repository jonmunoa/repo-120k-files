// fichero 32049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32049;

Registro32049 crear_registro32049(int id) {
    Registro32049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32049(Registro32049 r) {
    return r.valor + r.id;
}
