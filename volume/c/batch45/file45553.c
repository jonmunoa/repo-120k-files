// fichero 45553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45553;

Registro45553 crear_registro45553(int id) {
    Registro45553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45553(Registro45553 r) {
    return r.valor + r.id;
}
