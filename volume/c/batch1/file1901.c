// fichero 1901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1901;

Registro1901 crear_registro1901(int id) {
    Registro1901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1901(Registro1901 r) {
    return r.valor + r.id;
}
