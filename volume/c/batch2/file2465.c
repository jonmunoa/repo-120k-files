// fichero 2465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2465;

Registro2465 crear_registro2465(int id) {
    Registro2465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2465(Registro2465 r) {
    return r.valor + r.id;
}
