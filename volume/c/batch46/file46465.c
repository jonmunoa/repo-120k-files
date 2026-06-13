// fichero 46465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46465;

Registro46465 crear_registro46465(int id) {
    Registro46465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46465(Registro46465 r) {
    return r.valor + r.id;
}
