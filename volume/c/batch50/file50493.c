// fichero 50493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50493;

Registro50493 crear_registro50493(int id) {
    Registro50493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50493(Registro50493 r) {
    return r.valor + r.id;
}
