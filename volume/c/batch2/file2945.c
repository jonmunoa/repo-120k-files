// fichero 2945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2945;

Registro2945 crear_registro2945(int id) {
    Registro2945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2945(Registro2945 r) {
    return r.valor + r.id;
}
