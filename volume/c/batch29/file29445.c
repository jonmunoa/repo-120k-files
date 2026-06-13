// fichero 29445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29445;

Registro29445 crear_registro29445(int id) {
    Registro29445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29445(Registro29445 r) {
    return r.valor + r.id;
}
