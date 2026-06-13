// fichero 14145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14145;

Registro14145 crear_registro14145(int id) {
    Registro14145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14145(Registro14145 r) {
    return r.valor + r.id;
}
