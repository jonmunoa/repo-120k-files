// fichero 25969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25969;

Registro25969 crear_registro25969(int id) {
    Registro25969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25969(Registro25969 r) {
    return r.valor + r.id;
}
