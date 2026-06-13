// fichero 40769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40769;

Registro40769 crear_registro40769(int id) {
    Registro40769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40769(Registro40769 r) {
    return r.valor + r.id;
}
