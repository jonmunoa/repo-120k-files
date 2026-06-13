// fichero 15069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15069;

Registro15069 crear_registro15069(int id) {
    Registro15069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15069(Registro15069 r) {
    return r.valor + r.id;
}
