// fichero 873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro873;

Registro873 crear_registro873(int id) {
    Registro873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro873(Registro873 r) {
    return r.valor + r.id;
}
