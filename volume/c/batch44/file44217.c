// fichero 44217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44217;

Registro44217 crear_registro44217(int id) {
    Registro44217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44217(Registro44217 r) {
    return r.valor + r.id;
}
