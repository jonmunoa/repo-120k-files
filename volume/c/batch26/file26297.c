// fichero 26297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26297;

Registro26297 crear_registro26297(int id) {
    Registro26297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26297(Registro26297 r) {
    return r.valor + r.id;
}
