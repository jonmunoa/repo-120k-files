// fichero 5529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5529;

Registro5529 crear_registro5529(int id) {
    Registro5529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5529(Registro5529 r) {
    return r.valor + r.id;
}
