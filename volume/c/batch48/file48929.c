// fichero 48929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48929;

Registro48929 crear_registro48929(int id) {
    Registro48929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48929(Registro48929 r) {
    return r.valor + r.id;
}
