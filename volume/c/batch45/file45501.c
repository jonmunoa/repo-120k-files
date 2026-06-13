// fichero 45501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45501;

Registro45501 crear_registro45501(int id) {
    Registro45501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45501(Registro45501 r) {
    return r.valor + r.id;
}
