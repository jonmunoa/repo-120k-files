// fichero 43793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43793;

Registro43793 crear_registro43793(int id) {
    Registro43793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43793(Registro43793 r) {
    return r.valor + r.id;
}
