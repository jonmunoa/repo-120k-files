// fichero 2853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2853;

Registro2853 crear_registro2853(int id) {
    Registro2853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2853(Registro2853 r) {
    return r.valor + r.id;
}
