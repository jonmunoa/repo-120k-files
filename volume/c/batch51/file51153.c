// fichero 51153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51153;

Registro51153 crear_registro51153(int id) {
    Registro51153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51153(Registro51153 r) {
    return r.valor + r.id;
}
