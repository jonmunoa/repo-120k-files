// fichero 50965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50965;

Registro50965 crear_registro50965(int id) {
    Registro50965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50965(Registro50965 r) {
    return r.valor + r.id;
}
