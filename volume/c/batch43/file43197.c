// fichero 43197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43197;

Registro43197 crear_registro43197(int id) {
    Registro43197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43197(Registro43197 r) {
    return r.valor + r.id;
}
