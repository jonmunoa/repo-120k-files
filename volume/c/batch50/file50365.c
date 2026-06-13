// fichero 50365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50365;

Registro50365 crear_registro50365(int id) {
    Registro50365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50365(Registro50365 r) {
    return r.valor + r.id;
}
