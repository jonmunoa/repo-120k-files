// fichero 2257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2257;

Registro2257 crear_registro2257(int id) {
    Registro2257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2257(Registro2257 r) {
    return r.valor + r.id;
}
