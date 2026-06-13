// fichero 29077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29077;

Registro29077 crear_registro29077(int id) {
    Registro29077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29077(Registro29077 r) {
    return r.valor + r.id;
}
