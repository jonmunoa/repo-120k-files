// fichero 24189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24189;

Registro24189 crear_registro24189(int id) {
    Registro24189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24189(Registro24189 r) {
    return r.valor + r.id;
}
