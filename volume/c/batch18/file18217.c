// fichero 18217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18217;

Registro18217 crear_registro18217(int id) {
    Registro18217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18217(Registro18217 r) {
    return r.valor + r.id;
}
