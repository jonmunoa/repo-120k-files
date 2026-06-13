// fichero 28505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28505;

Registro28505 crear_registro28505(int id) {
    Registro28505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28505(Registro28505 r) {
    return r.valor + r.id;
}
