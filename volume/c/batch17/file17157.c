// fichero 17157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17157;

Registro17157 crear_registro17157(int id) {
    Registro17157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17157(Registro17157 r) {
    return r.valor + r.id;
}
