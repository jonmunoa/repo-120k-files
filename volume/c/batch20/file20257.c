// fichero 20257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20257;

Registro20257 crear_registro20257(int id) {
    Registro20257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20257(Registro20257 r) {
    return r.valor + r.id;
}
