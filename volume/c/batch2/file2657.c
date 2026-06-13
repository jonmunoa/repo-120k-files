// fichero 2657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2657;

Registro2657 crear_registro2657(int id) {
    Registro2657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2657(Registro2657 r) {
    return r.valor + r.id;
}
