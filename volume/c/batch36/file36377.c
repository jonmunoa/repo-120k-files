// fichero 36377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36377;

Registro36377 crear_registro36377(int id) {
    Registro36377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36377(Registro36377 r) {
    return r.valor + r.id;
}
