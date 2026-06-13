// fichero 53689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53689;

Registro53689 crear_registro53689(int id) {
    Registro53689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53689(Registro53689 r) {
    return r.valor + r.id;
}
