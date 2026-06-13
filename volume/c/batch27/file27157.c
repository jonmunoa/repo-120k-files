// fichero 27157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27157;

Registro27157 crear_registro27157(int id) {
    Registro27157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27157(Registro27157 r) {
    return r.valor + r.id;
}
