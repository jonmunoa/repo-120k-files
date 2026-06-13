// fichero 8349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8349;

Registro8349 crear_registro8349(int id) {
    Registro8349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8349(Registro8349 r) {
    return r.valor + r.id;
}
