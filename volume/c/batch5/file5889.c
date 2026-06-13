// fichero 5889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5889;

Registro5889 crear_registro5889(int id) {
    Registro5889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5889(Registro5889 r) {
    return r.valor + r.id;
}
