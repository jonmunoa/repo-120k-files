// fichero 8437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8437;

Registro8437 crear_registro8437(int id) {
    Registro8437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8437(Registro8437 r) {
    return r.valor + r.id;
}
