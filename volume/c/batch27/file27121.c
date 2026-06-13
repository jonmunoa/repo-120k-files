// fichero 27121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27121;

Registro27121 crear_registro27121(int id) {
    Registro27121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27121(Registro27121 r) {
    return r.valor + r.id;
}
