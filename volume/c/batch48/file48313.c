// fichero 48313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48313;

Registro48313 crear_registro48313(int id) {
    Registro48313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48313(Registro48313 r) {
    return r.valor + r.id;
}
