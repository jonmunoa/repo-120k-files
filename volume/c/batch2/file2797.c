// fichero 2797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2797;

Registro2797 crear_registro2797(int id) {
    Registro2797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2797(Registro2797 r) {
    return r.valor + r.id;
}
