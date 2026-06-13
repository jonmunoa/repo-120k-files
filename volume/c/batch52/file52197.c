// fichero 52197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52197;

Registro52197 crear_registro52197(int id) {
    Registro52197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52197(Registro52197 r) {
    return r.valor + r.id;
}
