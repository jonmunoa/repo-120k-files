// fichero 53157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53157;

Registro53157 crear_registro53157(int id) {
    Registro53157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53157(Registro53157 r) {
    return r.valor + r.id;
}
