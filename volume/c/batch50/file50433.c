// fichero 50433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50433;

Registro50433 crear_registro50433(int id) {
    Registro50433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50433(Registro50433 r) {
    return r.valor + r.id;
}
