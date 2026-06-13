// fichero 45021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45021;

Registro45021 crear_registro45021(int id) {
    Registro45021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45021(Registro45021 r) {
    return r.valor + r.id;
}
