// fichero 50925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50925;

Registro50925 crear_registro50925(int id) {
    Registro50925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50925(Registro50925 r) {
    return r.valor + r.id;
}
