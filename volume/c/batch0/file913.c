// fichero 913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro913;

Registro913 crear_registro913(int id) {
    Registro913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro913(Registro913 r) {
    return r.valor + r.id;
}
