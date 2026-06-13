// fichero 43145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43145;

Registro43145 crear_registro43145(int id) {
    Registro43145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43145(Registro43145 r) {
    return r.valor + r.id;
}
