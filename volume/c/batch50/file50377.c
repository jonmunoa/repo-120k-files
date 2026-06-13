// fichero 50377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50377;

Registro50377 crear_registro50377(int id) {
    Registro50377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50377(Registro50377 r) {
    return r.valor + r.id;
}
