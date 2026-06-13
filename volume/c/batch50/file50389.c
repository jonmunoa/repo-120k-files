// fichero 50389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50389;

Registro50389 crear_registro50389(int id) {
    Registro50389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50389(Registro50389 r) {
    return r.valor + r.id;
}
