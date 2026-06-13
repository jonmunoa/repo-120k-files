// fichero 2437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2437;

Registro2437 crear_registro2437(int id) {
    Registro2437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2437(Registro2437 r) {
    return r.valor + r.id;
}
