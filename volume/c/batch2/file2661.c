// fichero 2661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2661;

Registro2661 crear_registro2661(int id) {
    Registro2661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2661(Registro2661 r) {
    return r.valor + r.id;
}
