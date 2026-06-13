// fichero 47061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47061;

Registro47061 crear_registro47061(int id) {
    Registro47061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47061(Registro47061 r) {
    return r.valor + r.id;
}
