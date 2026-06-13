// fichero 1173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1173;

Registro1173 crear_registro1173(int id) {
    Registro1173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1173(Registro1173 r) {
    return r.valor + r.id;
}
