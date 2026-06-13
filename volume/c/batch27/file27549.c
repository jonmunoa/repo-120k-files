// fichero 27549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27549;

Registro27549 crear_registro27549(int id) {
    Registro27549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27549(Registro27549 r) {
    return r.valor + r.id;
}
