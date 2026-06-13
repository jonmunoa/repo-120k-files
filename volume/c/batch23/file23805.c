// fichero 23805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23805;

Registro23805 crear_registro23805(int id) {
    Registro23805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23805(Registro23805 r) {
    return r.valor + r.id;
}
