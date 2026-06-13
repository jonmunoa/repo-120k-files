// fichero 2393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2393;

Registro2393 crear_registro2393(int id) {
    Registro2393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2393(Registro2393 r) {
    return r.valor + r.id;
}
