// fichero 44157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44157;

Registro44157 crear_registro44157(int id) {
    Registro44157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44157(Registro44157 r) {
    return r.valor + r.id;
}
