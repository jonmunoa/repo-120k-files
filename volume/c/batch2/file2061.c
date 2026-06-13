// fichero 2061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2061;

Registro2061 crear_registro2061(int id) {
    Registro2061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2061(Registro2061 r) {
    return r.valor + r.id;
}
