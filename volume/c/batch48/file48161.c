// fichero 48161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48161;

Registro48161 crear_registro48161(int id) {
    Registro48161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48161(Registro48161 r) {
    return r.valor + r.id;
}
