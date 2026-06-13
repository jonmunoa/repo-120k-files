// fichero 50013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50013;

Registro50013 crear_registro50013(int id) {
    Registro50013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50013(Registro50013 r) {
    return r.valor + r.id;
}
