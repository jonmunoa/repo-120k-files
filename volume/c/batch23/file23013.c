// fichero 23013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23013;

Registro23013 crear_registro23013(int id) {
    Registro23013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23013(Registro23013 r) {
    return r.valor + r.id;
}
