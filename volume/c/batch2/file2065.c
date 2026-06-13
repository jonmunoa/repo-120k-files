// fichero 2065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2065;

Registro2065 crear_registro2065(int id) {
    Registro2065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2065(Registro2065 r) {
    return r.valor + r.id;
}
