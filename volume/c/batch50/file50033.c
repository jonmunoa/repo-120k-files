// fichero 50033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50033;

Registro50033 crear_registro50033(int id) {
    Registro50033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50033(Registro50033 r) {
    return r.valor + r.id;
}
