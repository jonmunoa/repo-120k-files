// fichero 2913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2913;

Registro2913 crear_registro2913(int id) {
    Registro2913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2913(Registro2913 r) {
    return r.valor + r.id;
}
