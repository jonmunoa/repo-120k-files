// fichero 52405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52405;

Registro52405 crear_registro52405(int id) {
    Registro52405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52405(Registro52405 r) {
    return r.valor + r.id;
}
