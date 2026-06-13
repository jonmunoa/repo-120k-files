// fichero 1233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1233;

Registro1233 crear_registro1233(int id) {
    Registro1233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1233(Registro1233 r) {
    return r.valor + r.id;
}
