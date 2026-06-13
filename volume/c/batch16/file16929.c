// fichero 16929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16929;

Registro16929 crear_registro16929(int id) {
    Registro16929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16929(Registro16929 r) {
    return r.valor + r.id;
}
