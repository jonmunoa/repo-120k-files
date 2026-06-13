// fichero 26873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26873;

Registro26873 crear_registro26873(int id) {
    Registro26873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26873(Registro26873 r) {
    return r.valor + r.id;
}
