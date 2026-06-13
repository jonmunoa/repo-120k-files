// fichero 48969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48969;

Registro48969 crear_registro48969(int id) {
    Registro48969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48969(Registro48969 r) {
    return r.valor + r.id;
}
