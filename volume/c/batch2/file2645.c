// fichero 2645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2645;

Registro2645 crear_registro2645(int id) {
    Registro2645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2645(Registro2645 r) {
    return r.valor + r.id;
}
