// fichero 18581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18581;

Registro18581 crear_registro18581(int id) {
    Registro18581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18581(Registro18581 r) {
    return r.valor + r.id;
}
