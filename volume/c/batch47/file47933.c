// fichero 47933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47933;

Registro47933 crear_registro47933(int id) {
    Registro47933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47933(Registro47933 r) {
    return r.valor + r.id;
}
