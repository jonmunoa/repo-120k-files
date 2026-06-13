// fichero 29169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29169;

Registro29169 crear_registro29169(int id) {
    Registro29169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29169(Registro29169 r) {
    return r.valor + r.id;
}
