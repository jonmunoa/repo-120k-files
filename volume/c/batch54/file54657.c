// fichero 54657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54657;

Registro54657 crear_registro54657(int id) {
    Registro54657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54657(Registro54657 r) {
    return r.valor + r.id;
}
