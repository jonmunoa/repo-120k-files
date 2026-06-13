// fichero 38965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38965;

Registro38965 crear_registro38965(int id) {
    Registro38965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38965(Registro38965 r) {
    return r.valor + r.id;
}
