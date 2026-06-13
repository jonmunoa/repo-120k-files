// fichero 27405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27405;

Registro27405 crear_registro27405(int id) {
    Registro27405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27405(Registro27405 r) {
    return r.valor + r.id;
}
