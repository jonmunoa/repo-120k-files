// fichero 29733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29733;

Registro29733 crear_registro29733(int id) {
    Registro29733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29733(Registro29733 r) {
    return r.valor + r.id;
}
