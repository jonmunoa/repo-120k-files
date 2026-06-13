// fichero 45329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45329;

Registro45329 crear_registro45329(int id) {
    Registro45329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45329(Registro45329 r) {
    return r.valor + r.id;
}
