// fichero 29029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29029;

Registro29029 crear_registro29029(int id) {
    Registro29029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29029(Registro29029 r) {
    return r.valor + r.id;
}
