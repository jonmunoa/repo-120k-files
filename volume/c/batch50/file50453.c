// fichero 50453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50453;

Registro50453 crear_registro50453(int id) {
    Registro50453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50453(Registro50453 r) {
    return r.valor + r.id;
}
