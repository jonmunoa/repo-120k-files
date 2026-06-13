// fichero 26225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26225;

Registro26225 crear_registro26225(int id) {
    Registro26225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26225(Registro26225 r) {
    return r.valor + r.id;
}
