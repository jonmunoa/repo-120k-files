// fichero 2933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2933;

Registro2933 crear_registro2933(int id) {
    Registro2933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2933(Registro2933 r) {
    return r.valor + r.id;
}
