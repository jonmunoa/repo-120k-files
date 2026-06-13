// fichero 53125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53125;

Registro53125 crear_registro53125(int id) {
    Registro53125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53125(Registro53125 r) {
    return r.valor + r.id;
}
