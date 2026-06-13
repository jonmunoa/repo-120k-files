// fichero 16161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16161;

Registro16161 crear_registro16161(int id) {
    Registro16161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16161(Registro16161 r) {
    return r.valor + r.id;
}
