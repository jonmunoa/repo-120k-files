// fichero 38553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38553;

Registro38553 crear_registro38553(int id) {
    Registro38553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38553(Registro38553 r) {
    return r.valor + r.id;
}
