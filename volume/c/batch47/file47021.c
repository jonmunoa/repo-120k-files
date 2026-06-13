// fichero 47021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47021;

Registro47021 crear_registro47021(int id) {
    Registro47021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47021(Registro47021 r) {
    return r.valor + r.id;
}
