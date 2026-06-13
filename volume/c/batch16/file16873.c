// fichero 16873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16873;

Registro16873 crear_registro16873(int id) {
    Registro16873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16873(Registro16873 r) {
    return r.valor + r.id;
}
