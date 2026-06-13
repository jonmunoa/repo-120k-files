// fichero 35297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35297;

Registro35297 crear_registro35297(int id) {
    Registro35297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35297(Registro35297 r) {
    return r.valor + r.id;
}
