// fichero 5997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5997;

Registro5997 crear_registro5997(int id) {
    Registro5997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5997(Registro5997 r) {
    return r.valor + r.id;
}
