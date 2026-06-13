// fichero 1197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1197;

Registro1197 crear_registro1197(int id) {
    Registro1197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1197(Registro1197 r) {
    return r.valor + r.id;
}
