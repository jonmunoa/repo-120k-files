// fichero 24889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24889;

Registro24889 crear_registro24889(int id) {
    Registro24889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24889(Registro24889 r) {
    return r.valor + r.id;
}
