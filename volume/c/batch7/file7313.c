// fichero 7313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7313;

Registro7313 crear_registro7313(int id) {
    Registro7313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7313(Registro7313 r) {
    return r.valor + r.id;
}
