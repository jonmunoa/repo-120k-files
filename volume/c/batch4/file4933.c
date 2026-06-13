// fichero 4933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4933;

Registro4933 crear_registro4933(int id) {
    Registro4933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4933(Registro4933 r) {
    return r.valor + r.id;
}
