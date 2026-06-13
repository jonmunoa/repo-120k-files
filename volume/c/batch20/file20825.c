// fichero 20825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20825;

Registro20825 crear_registro20825(int id) {
    Registro20825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20825(Registro20825 r) {
    return r.valor + r.id;
}
