// fichero 46161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46161;

Registro46161 crear_registro46161(int id) {
    Registro46161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46161(Registro46161 r) {
    return r.valor + r.id;
}
