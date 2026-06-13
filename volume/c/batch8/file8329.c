// fichero 8329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8329;

Registro8329 crear_registro8329(int id) {
    Registro8329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8329(Registro8329 r) {
    return r.valor + r.id;
}
