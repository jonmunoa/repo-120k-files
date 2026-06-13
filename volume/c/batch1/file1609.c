// fichero 1609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1609;

Registro1609 crear_registro1609(int id) {
    Registro1609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1609(Registro1609 r) {
    return r.valor + r.id;
}
