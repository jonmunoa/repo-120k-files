// fichero 29509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29509;

Registro29509 crear_registro29509(int id) {
    Registro29509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29509(Registro29509 r) {
    return r.valor + r.id;
}
