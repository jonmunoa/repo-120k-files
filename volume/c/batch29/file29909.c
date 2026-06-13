// fichero 29909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29909;

Registro29909 crear_registro29909(int id) {
    Registro29909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29909(Registro29909 r) {
    return r.valor + r.id;
}
