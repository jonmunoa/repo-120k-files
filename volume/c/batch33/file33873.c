// fichero 33873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33873;

Registro33873 crear_registro33873(int id) {
    Registro33873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33873(Registro33873 r) {
    return r.valor + r.id;
}
