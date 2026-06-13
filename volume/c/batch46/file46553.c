// fichero 46553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46553;

Registro46553 crear_registro46553(int id) {
    Registro46553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46553(Registro46553 r) {
    return r.valor + r.id;
}
