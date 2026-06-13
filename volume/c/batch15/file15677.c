// fichero 15677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15677;

Registro15677 crear_registro15677(int id) {
    Registro15677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15677(Registro15677 r) {
    return r.valor + r.id;
}
