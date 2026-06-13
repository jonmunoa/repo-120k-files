// fichero 409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro409;

Registro409 crear_registro409(int id) {
    Registro409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro409(Registro409 r) {
    return r.valor + r.id;
}
