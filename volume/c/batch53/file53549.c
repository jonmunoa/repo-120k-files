// fichero 53549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53549;

Registro53549 crear_registro53549(int id) {
    Registro53549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53549(Registro53549 r) {
    return r.valor + r.id;
}
