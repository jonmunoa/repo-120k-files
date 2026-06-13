// fichero 32089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32089;

Registro32089 crear_registro32089(int id) {
    Registro32089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32089(Registro32089 r) {
    return r.valor + r.id;
}
