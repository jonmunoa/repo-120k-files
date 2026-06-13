// fichero 33145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33145;

Registro33145 crear_registro33145(int id) {
    Registro33145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33145(Registro33145 r) {
    return r.valor + r.id;
}
