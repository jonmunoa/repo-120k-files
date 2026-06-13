// fichero 14049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14049;

Registro14049 crear_registro14049(int id) {
    Registro14049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14049(Registro14049 r) {
    return r.valor + r.id;
}
