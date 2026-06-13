// fichero 29045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29045;

Registro29045 crear_registro29045(int id) {
    Registro29045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29045(Registro29045 r) {
    return r.valor + r.id;
}
