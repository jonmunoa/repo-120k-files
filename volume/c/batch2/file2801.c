// fichero 2801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2801;

Registro2801 crear_registro2801(int id) {
    Registro2801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2801(Registro2801 r) {
    return r.valor + r.id;
}
