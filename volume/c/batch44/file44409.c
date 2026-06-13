// fichero 44409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44409;

Registro44409 crear_registro44409(int id) {
    Registro44409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44409(Registro44409 r) {
    return r.valor + r.id;
}
