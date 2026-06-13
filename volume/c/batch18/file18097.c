// fichero 18097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18097;

Registro18097 crear_registro18097(int id) {
    Registro18097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18097(Registro18097 r) {
    return r.valor + r.id;
}
