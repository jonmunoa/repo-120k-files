// fichero 44725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44725;

Registro44725 crear_registro44725(int id) {
    Registro44725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44725(Registro44725 r) {
    return r.valor + r.id;
}
