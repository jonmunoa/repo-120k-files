// fichero 29365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29365;

Registro29365 crear_registro29365(int id) {
    Registro29365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29365(Registro29365 r) {
    return r.valor + r.id;
}
