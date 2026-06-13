// fichero 53029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53029;

Registro53029 crear_registro53029(int id) {
    Registro53029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53029(Registro53029 r) {
    return r.valor + r.id;
}
