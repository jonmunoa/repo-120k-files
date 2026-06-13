// fichero 27005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27005;

Registro27005 crear_registro27005(int id) {
    Registro27005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27005(Registro27005 r) {
    return r.valor + r.id;
}
