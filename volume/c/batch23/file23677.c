// fichero 23677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23677;

Registro23677 crear_registro23677(int id) {
    Registro23677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23677(Registro23677 r) {
    return r.valor + r.id;
}
