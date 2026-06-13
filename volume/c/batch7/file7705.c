// fichero 7705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7705;

Registro7705 crear_registro7705(int id) {
    Registro7705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7705(Registro7705 r) {
    return r.valor + r.id;
}
