// fichero 157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro157;

Registro157 crear_registro157(int id) {
    Registro157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro157(Registro157 r) {
    return r.valor + r.id;
}
