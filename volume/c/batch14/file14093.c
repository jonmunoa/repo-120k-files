// fichero 14093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14093;

Registro14093 crear_registro14093(int id) {
    Registro14093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14093(Registro14093 r) {
    return r.valor + r.id;
}
