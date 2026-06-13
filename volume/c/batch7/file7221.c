// fichero 7221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7221;

Registro7221 crear_registro7221(int id) {
    Registro7221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7221(Registro7221 r) {
    return r.valor + r.id;
}
