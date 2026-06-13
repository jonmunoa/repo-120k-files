// fichero 50089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50089;

Registro50089 crear_registro50089(int id) {
    Registro50089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50089(Registro50089 r) {
    return r.valor + r.id;
}
