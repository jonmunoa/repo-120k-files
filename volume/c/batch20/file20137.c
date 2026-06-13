// fichero 20137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20137;

Registro20137 crear_registro20137(int id) {
    Registro20137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20137(Registro20137 r) {
    return r.valor + r.id;
}
