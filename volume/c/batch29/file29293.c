// fichero 29293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29293;

Registro29293 crear_registro29293(int id) {
    Registro29293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29293(Registro29293 r) {
    return r.valor + r.id;
}
