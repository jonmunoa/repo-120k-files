// fichero 52889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52889;

Registro52889 crear_registro52889(int id) {
    Registro52889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52889(Registro52889 r) {
    return r.valor + r.id;
}
