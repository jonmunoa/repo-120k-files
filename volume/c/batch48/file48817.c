// fichero 48817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48817;

Registro48817 crear_registro48817(int id) {
    Registro48817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48817(Registro48817 r) {
    return r.valor + r.id;
}
