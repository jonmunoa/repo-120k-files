// fichero 14173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14173;

Registro14173 crear_registro14173(int id) {
    Registro14173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14173(Registro14173 r) {
    return r.valor + r.id;
}
