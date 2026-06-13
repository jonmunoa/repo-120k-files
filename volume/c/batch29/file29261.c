// fichero 29261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29261;

Registro29261 crear_registro29261(int id) {
    Registro29261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29261(Registro29261 r) {
    return r.valor + r.id;
}
