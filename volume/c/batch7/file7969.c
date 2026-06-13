// fichero 7969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7969;

Registro7969 crear_registro7969(int id) {
    Registro7969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7969(Registro7969 r) {
    return r.valor + r.id;
}
