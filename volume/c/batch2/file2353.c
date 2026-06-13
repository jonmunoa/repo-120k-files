// fichero 2353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2353;

Registro2353 crear_registro2353(int id) {
    Registro2353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2353(Registro2353 r) {
    return r.valor + r.id;
}
