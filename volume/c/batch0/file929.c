// fichero 929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro929;

Registro929 crear_registro929(int id) {
    Registro929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro929(Registro929 r) {
    return r.valor + r.id;
}
