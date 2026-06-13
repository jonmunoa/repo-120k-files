// fichero 2997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2997;

Registro2997 crear_registro2997(int id) {
    Registro2997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2997(Registro2997 r) {
    return r.valor + r.id;
}
