// fichero 14873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14873;

Registro14873 crear_registro14873(int id) {
    Registro14873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14873(Registro14873 r) {
    return r.valor + r.id;
}
