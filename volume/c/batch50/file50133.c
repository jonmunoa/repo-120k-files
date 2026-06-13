// fichero 50133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50133;

Registro50133 crear_registro50133(int id) {
    Registro50133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50133(Registro50133 r) {
    return r.valor + r.id;
}
