// fichero 50609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50609;

Registro50609 crear_registro50609(int id) {
    Registro50609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50609(Registro50609 r) {
    return r.valor + r.id;
}
