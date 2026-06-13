// fichero 50805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50805;

Registro50805 crear_registro50805(int id) {
    Registro50805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50805(Registro50805 r) {
    return r.valor + r.id;
}
