// fichero 47805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47805;

Registro47805 crear_registro47805(int id) {
    Registro47805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47805(Registro47805 r) {
    return r.valor + r.id;
}
