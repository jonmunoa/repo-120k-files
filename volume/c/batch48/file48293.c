// fichero 48293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48293;

Registro48293 crear_registro48293(int id) {
    Registro48293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48293(Registro48293 r) {
    return r.valor + r.id;
}
