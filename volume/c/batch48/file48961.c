// fichero 48961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48961;

Registro48961 crear_registro48961(int id) {
    Registro48961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48961(Registro48961 r) {
    return r.valor + r.id;
}
