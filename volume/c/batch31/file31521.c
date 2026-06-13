// fichero 31521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31521;

Registro31521 crear_registro31521(int id) {
    Registro31521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31521(Registro31521 r) {
    return r.valor + r.id;
}
