// fichero 44021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44021;

Registro44021 crear_registro44021(int id) {
    Registro44021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44021(Registro44021 r) {
    return r.valor + r.id;
}
