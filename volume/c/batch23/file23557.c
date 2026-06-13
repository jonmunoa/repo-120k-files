// fichero 23557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23557;

Registro23557 crear_registro23557(int id) {
    Registro23557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23557(Registro23557 r) {
    return r.valor + r.id;
}
