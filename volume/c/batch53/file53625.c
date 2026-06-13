// fichero 53625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53625;

Registro53625 crear_registro53625(int id) {
    Registro53625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53625(Registro53625 r) {
    return r.valor + r.id;
}
