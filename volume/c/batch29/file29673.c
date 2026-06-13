// fichero 29673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29673;

Registro29673 crear_registro29673(int id) {
    Registro29673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29673(Registro29673 r) {
    return r.valor + r.id;
}
