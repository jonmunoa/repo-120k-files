// fichero 2177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2177;

Registro2177 crear_registro2177(int id) {
    Registro2177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2177(Registro2177 r) {
    return r.valor + r.id;
}
