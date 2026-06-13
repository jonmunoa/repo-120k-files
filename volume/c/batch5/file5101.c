// fichero 5101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5101;

Registro5101 crear_registro5101(int id) {
    Registro5101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5101(Registro5101 r) {
    return r.valor + r.id;
}
