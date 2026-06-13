// fichero 26929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26929;

Registro26929 crear_registro26929(int id) {
    Registro26929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26929(Registro26929 r) {
    return r.valor + r.id;
}
