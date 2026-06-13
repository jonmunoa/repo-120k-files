// fichero 23213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23213;

Registro23213 crear_registro23213(int id) {
    Registro23213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23213(Registro23213 r) {
    return r.valor + r.id;
}
