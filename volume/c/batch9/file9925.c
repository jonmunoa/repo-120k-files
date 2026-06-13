// fichero 9925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9925;

Registro9925 crear_registro9925(int id) {
    Registro9925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9925(Registro9925 r) {
    return r.valor + r.id;
}
