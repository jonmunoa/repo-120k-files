// fichero 35349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35349;

Registro35349 crear_registro35349(int id) {
    Registro35349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35349(Registro35349 r) {
    return r.valor + r.id;
}
