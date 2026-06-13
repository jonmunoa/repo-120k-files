// fichero 349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro349;

Registro349 crear_registro349(int id) {
    Registro349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro349(Registro349 r) {
    return r.valor + r.id;
}
