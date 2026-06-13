// fichero 23553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23553;

Registro23553 crear_registro23553(int id) {
    Registro23553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23553(Registro23553 r) {
    return r.valor + r.id;
}
