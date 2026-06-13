// fichero 47065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47065;

Registro47065 crear_registro47065(int id) {
    Registro47065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47065(Registro47065 r) {
    return r.valor + r.id;
}
