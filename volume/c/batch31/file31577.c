// fichero 31577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31577;

Registro31577 crear_registro31577(int id) {
    Registro31577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31577(Registro31577 r) {
    return r.valor + r.id;
}
