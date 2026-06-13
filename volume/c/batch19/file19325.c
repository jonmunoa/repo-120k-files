// fichero 19325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19325;

Registro19325 crear_registro19325(int id) {
    Registro19325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19325(Registro19325 r) {
    return r.valor + r.id;
}
