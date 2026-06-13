// fichero 16313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16313;

Registro16313 crear_registro16313(int id) {
    Registro16313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16313(Registro16313 r) {
    return r.valor + r.id;
}
