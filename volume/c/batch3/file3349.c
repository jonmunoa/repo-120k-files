// fichero 3349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3349;

Registro3349 crear_registro3349(int id) {
    Registro3349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3349(Registro3349 r) {
    return r.valor + r.id;
}
