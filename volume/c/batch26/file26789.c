// fichero 26789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26789;

Registro26789 crear_registro26789(int id) {
    Registro26789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26789(Registro26789 r) {
    return r.valor + r.id;
}
