// fichero 2549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2549;

Registro2549 crear_registro2549(int id) {
    Registro2549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2549(Registro2549 r) {
    return r.valor + r.id;
}
