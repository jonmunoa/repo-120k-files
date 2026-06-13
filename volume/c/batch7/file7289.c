// fichero 7289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7289;

Registro7289 crear_registro7289(int id) {
    Registro7289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7289(Registro7289 r) {
    return r.valor + r.id;
}
