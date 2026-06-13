// fichero 52185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52185;

Registro52185 crear_registro52185(int id) {
    Registro52185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52185(Registro52185 r) {
    return r.valor + r.id;
}
