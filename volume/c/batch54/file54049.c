// fichero 54049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54049;

Registro54049 crear_registro54049(int id) {
    Registro54049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54049(Registro54049 r) {
    return r.valor + r.id;
}
