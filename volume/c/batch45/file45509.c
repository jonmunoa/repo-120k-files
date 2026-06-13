// fichero 45509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45509;

Registro45509 crear_registro45509(int id) {
    Registro45509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45509(Registro45509 r) {
    return r.valor + r.id;
}
