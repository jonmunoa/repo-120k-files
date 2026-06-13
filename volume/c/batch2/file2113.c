// fichero 2113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2113;

Registro2113 crear_registro2113(int id) {
    Registro2113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2113(Registro2113 r) {
    return r.valor + r.id;
}
