// fichero 6157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6157;

Registro6157 crear_registro6157(int id) {
    Registro6157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6157(Registro6157 r) {
    return r.valor + r.id;
}
