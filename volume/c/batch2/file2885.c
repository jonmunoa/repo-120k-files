// fichero 2885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2885;

Registro2885 crear_registro2885(int id) {
    Registro2885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2885(Registro2885 r) {
    return r.valor + r.id;
}
