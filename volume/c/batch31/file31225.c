// fichero 31225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31225;

Registro31225 crear_registro31225(int id) {
    Registro31225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31225(Registro31225 r) {
    return r.valor + r.id;
}
