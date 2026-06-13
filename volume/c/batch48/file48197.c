// fichero 48197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48197;

Registro48197 crear_registro48197(int id) {
    Registro48197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48197(Registro48197 r) {
    return r.valor + r.id;
}
