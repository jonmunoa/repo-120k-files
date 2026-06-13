// fichero 45629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45629;

Registro45629 crear_registro45629(int id) {
    Registro45629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45629(Registro45629 r) {
    return r.valor + r.id;
}
