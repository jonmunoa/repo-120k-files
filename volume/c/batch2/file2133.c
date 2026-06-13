// fichero 2133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2133;

Registro2133 crear_registro2133(int id) {
    Registro2133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2133(Registro2133 r) {
    return r.valor + r.id;
}
