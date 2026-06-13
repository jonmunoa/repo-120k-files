// fichero 48049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48049;

Registro48049 crear_registro48049(int id) {
    Registro48049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48049(Registro48049 r) {
    return r.valor + r.id;
}
