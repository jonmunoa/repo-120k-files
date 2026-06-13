// fichero 31377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31377;

Registro31377 crear_registro31377(int id) {
    Registro31377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31377(Registro31377 r) {
    return r.valor + r.id;
}
