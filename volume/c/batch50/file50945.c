// fichero 50945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50945;

Registro50945 crear_registro50945(int id) {
    Registro50945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50945(Registro50945 r) {
    return r.valor + r.id;
}
