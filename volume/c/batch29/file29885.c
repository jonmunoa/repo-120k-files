// fichero 29885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29885;

Registro29885 crear_registro29885(int id) {
    Registro29885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29885(Registro29885 r) {
    return r.valor + r.id;
}
