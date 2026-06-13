// fichero 17349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17349;

Registro17349 crear_registro17349(int id) {
    Registro17349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17349(Registro17349 r) {
    return r.valor + r.id;
}
