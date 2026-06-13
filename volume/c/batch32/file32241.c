// fichero 32241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32241;

Registro32241 crear_registro32241(int id) {
    Registro32241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32241(Registro32241 r) {
    return r.valor + r.id;
}
