// fichero 50181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50181;

Registro50181 crear_registro50181(int id) {
    Registro50181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50181(Registro50181 r) {
    return r.valor + r.id;
}
