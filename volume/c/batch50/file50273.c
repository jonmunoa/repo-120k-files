// fichero 50273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50273;

Registro50273 crear_registro50273(int id) {
    Registro50273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50273(Registro50273 r) {
    return r.valor + r.id;
}
