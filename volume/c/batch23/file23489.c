// fichero 23489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23489;

Registro23489 crear_registro23489(int id) {
    Registro23489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23489(Registro23489 r) {
    return r.valor + r.id;
}
