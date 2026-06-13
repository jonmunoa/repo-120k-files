// fichero 45757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45757;

Registro45757 crear_registro45757(int id) {
    Registro45757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45757(Registro45757 r) {
    return r.valor + r.id;
}
