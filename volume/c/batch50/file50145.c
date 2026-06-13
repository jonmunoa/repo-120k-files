// fichero 50145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50145;

Registro50145 crear_registro50145(int id) {
    Registro50145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50145(Registro50145 r) {
    return r.valor + r.id;
}
