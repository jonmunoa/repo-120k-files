// fichero 34833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34833;

Registro34833 crear_registro34833(int id) {
    Registro34833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34833(Registro34833 r) {
    return r.valor + r.id;
}
