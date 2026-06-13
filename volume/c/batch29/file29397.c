// fichero 29397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29397;

Registro29397 crear_registro29397(int id) {
    Registro29397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29397(Registro29397 r) {
    return r.valor + r.id;
}
