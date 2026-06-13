// fichero 2477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2477;

Registro2477 crear_registro2477(int id) {
    Registro2477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2477(Registro2477 r) {
    return r.valor + r.id;
}
