// fichero 50261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50261;

Registro50261 crear_registro50261(int id) {
    Registro50261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50261(Registro50261 r) {
    return r.valor + r.id;
}
