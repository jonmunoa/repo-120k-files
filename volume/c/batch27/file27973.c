// fichero 27973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27973;

Registro27973 crear_registro27973(int id) {
    Registro27973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27973(Registro27973 r) {
    return r.valor + r.id;
}
