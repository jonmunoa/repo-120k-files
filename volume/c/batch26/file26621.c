// fichero 26621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26621;

Registro26621 crear_registro26621(int id) {
    Registro26621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26621(Registro26621 r) {
    return r.valor + r.id;
}
