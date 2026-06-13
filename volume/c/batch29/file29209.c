// fichero 29209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29209;

Registro29209 crear_registro29209(int id) {
    Registro29209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29209(Registro29209 r) {
    return r.valor + r.id;
}
