// fichero 14677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14677;

Registro14677 crear_registro14677(int id) {
    Registro14677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14677(Registro14677 r) {
    return r.valor + r.id;
}
