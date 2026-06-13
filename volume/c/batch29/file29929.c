// fichero 29929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29929;

Registro29929 crear_registro29929(int id) {
    Registro29929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29929(Registro29929 r) {
    return r.valor + r.id;
}
