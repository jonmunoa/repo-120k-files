// fichero 7257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7257;

Registro7257 crear_registro7257(int id) {
    Registro7257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7257(Registro7257 r) {
    return r.valor + r.id;
}
