// fichero 48265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48265;

Registro48265 crear_registro48265(int id) {
    Registro48265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48265(Registro48265 r) {
    return r.valor + r.id;
}
