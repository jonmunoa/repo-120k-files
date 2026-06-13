// fichero 6197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6197;

Registro6197 crear_registro6197(int id) {
    Registro6197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6197(Registro6197 r) {
    return r.valor + r.id;
}
