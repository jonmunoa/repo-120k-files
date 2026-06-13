// fichero 12437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12437;

Registro12437 crear_registro12437(int id) {
    Registro12437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12437(Registro12437 r) {
    return r.valor + r.id;
}
