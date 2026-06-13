// fichero 50201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50201;

Registro50201 crear_registro50201(int id) {
    Registro50201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50201(Registro50201 r) {
    return r.valor + r.id;
}
