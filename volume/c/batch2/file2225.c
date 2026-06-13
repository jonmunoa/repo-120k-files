// fichero 2225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2225;

Registro2225 crear_registro2225(int id) {
    Registro2225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2225(Registro2225 r) {
    return r.valor + r.id;
}
