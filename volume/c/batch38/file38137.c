// fichero 38137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38137;

Registro38137 crear_registro38137(int id) {
    Registro38137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38137(Registro38137 r) {
    return r.valor + r.id;
}
