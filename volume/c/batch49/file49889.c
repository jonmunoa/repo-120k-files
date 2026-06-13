// fichero 49889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49889;

Registro49889 crear_registro49889(int id) {
    Registro49889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49889(Registro49889 r) {
    return r.valor + r.id;
}
