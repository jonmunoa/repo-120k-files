// fichero 45529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45529;

Registro45529 crear_registro45529(int id) {
    Registro45529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45529(Registro45529 r) {
    return r.valor + r.id;
}
