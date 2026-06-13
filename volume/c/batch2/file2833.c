// fichero 2833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2833;

Registro2833 crear_registro2833(int id) {
    Registro2833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2833(Registro2833 r) {
    return r.valor + r.id;
}
