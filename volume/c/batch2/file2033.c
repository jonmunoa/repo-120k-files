// fichero 2033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2033;

Registro2033 crear_registro2033(int id) {
    Registro2033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2033(Registro2033 r) {
    return r.valor + r.id;
}
