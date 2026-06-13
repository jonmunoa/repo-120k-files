// fichero 29273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29273;

Registro29273 crear_registro29273(int id) {
    Registro29273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29273(Registro29273 r) {
    return r.valor + r.id;
}
