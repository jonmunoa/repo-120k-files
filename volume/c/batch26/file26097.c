// fichero 26097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26097;

Registro26097 crear_registro26097(int id) {
    Registro26097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26097(Registro26097 r) {
    return r.valor + r.id;
}
