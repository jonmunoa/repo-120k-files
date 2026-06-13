// fichero 45497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45497;

Registro45497 crear_registro45497(int id) {
    Registro45497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45497(Registro45497 r) {
    return r.valor + r.id;
}
