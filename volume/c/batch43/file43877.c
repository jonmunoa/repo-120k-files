// fichero 43877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43877;

Registro43877 crear_registro43877(int id) {
    Registro43877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43877(Registro43877 r) {
    return r.valor + r.id;
}
