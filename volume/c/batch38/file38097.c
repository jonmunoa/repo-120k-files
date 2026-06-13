// fichero 38097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38097;

Registro38097 crear_registro38097(int id) {
    Registro38097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38097(Registro38097 r) {
    return r.valor + r.id;
}
