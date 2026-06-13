// fichero 45677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45677;

Registro45677 crear_registro45677(int id) {
    Registro45677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45677(Registro45677 r) {
    return r.valor + r.id;
}
