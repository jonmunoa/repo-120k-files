// fichero 50401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50401;

Registro50401 crear_registro50401(int id) {
    Registro50401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50401(Registro50401 r) {
    return r.valor + r.id;
}
