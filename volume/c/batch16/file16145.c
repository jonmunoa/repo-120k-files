// fichero 16145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16145;

Registro16145 crear_registro16145(int id) {
    Registro16145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16145(Registro16145 r) {
    return r.valor + r.id;
}
