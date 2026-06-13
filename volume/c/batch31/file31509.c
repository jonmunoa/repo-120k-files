// fichero 31509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31509;

Registro31509 crear_registro31509(int id) {
    Registro31509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31509(Registro31509 r) {
    return r.valor + r.id;
}
