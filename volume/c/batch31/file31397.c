// fichero 31397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31397;

Registro31397 crear_registro31397(int id) {
    Registro31397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31397(Registro31397 r) {
    return r.valor + r.id;
}
