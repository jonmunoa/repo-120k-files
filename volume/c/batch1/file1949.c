// fichero 1949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1949;

Registro1949 crear_registro1949(int id) {
    Registro1949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1949(Registro1949 r) {
    return r.valor + r.id;
}
