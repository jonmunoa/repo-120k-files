// fichero 29245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29245;

Registro29245 crear_registro29245(int id) {
    Registro29245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29245(Registro29245 r) {
    return r.valor + r.id;
}
