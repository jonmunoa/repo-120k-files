// fichero 23437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23437;

Registro23437 crear_registro23437(int id) {
    Registro23437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23437(Registro23437 r) {
    return r.valor + r.id;
}
