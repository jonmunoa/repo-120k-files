// fichero 50197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50197;

Registro50197 crear_registro50197(int id) {
    Registro50197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50197(Registro50197 r) {
    return r.valor + r.id;
}
