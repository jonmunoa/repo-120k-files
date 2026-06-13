// fichero 19793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19793;

Registro19793 crear_registro19793(int id) {
    Registro19793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19793(Registro19793 r) {
    return r.valor + r.id;
}
