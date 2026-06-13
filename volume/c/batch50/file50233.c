// fichero 50233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50233;

Registro50233 crear_registro50233(int id) {
    Registro50233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50233(Registro50233 r) {
    return r.valor + r.id;
}
