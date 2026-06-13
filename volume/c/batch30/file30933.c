// fichero 30933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30933;

Registro30933 crear_registro30933(int id) {
    Registro30933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30933(Registro30933 r) {
    return r.valor + r.id;
}
