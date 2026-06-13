// fichero 2101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2101;

Registro2101 crear_registro2101(int id) {
    Registro2101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2101(Registro2101 r) {
    return r.valor + r.id;
}
