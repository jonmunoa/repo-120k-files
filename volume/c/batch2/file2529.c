// fichero 2529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2529;

Registro2529 crear_registro2529(int id) {
    Registro2529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2529(Registro2529 r) {
    return r.valor + r.id;
}
