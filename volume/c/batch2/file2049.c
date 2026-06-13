// fichero 2049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2049;

Registro2049 crear_registro2049(int id) {
    Registro2049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2049(Registro2049 r) {
    return r.valor + r.id;
}
