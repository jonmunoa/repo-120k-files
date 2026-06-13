// fichero 46377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46377;

Registro46377 crear_registro46377(int id) {
    Registro46377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46377(Registro46377 r) {
    return r.valor + r.id;
}
