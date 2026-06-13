// fichero 50733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50733;

Registro50733 crear_registro50733(int id) {
    Registro50733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50733(Registro50733 r) {
    return r.valor + r.id;
}
