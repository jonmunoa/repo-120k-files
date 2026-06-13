// fichero 30805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30805;

Registro30805 crear_registro30805(int id) {
    Registro30805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30805(Registro30805 r) {
    return r.valor + r.id;
}
