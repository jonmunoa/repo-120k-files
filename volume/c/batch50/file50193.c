// fichero 50193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50193;

Registro50193 crear_registro50193(int id) {
    Registro50193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50193(Registro50193 r) {
    return r.valor + r.id;
}
