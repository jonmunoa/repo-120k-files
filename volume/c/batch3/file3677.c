// fichero 3677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3677;

Registro3677 crear_registro3677(int id) {
    Registro3677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3677(Registro3677 r) {
    return r.valor + r.id;
}
