// fichero 6973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6973;

Registro6973 crear_registro6973(int id) {
    Registro6973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6973(Registro6973 r) {
    return r.valor + r.id;
}
