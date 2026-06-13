// fichero 8065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8065;

Registro8065 crear_registro8065(int id) {
    Registro8065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8065(Registro8065 r) {
    return r.valor + r.id;
}
