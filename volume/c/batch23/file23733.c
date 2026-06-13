// fichero 23733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23733;

Registro23733 crear_registro23733(int id) {
    Registro23733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23733(Registro23733 r) {
    return r.valor + r.id;
}
