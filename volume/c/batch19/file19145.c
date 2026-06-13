// fichero 19145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19145;

Registro19145 crear_registro19145(int id) {
    Registro19145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19145(Registro19145 r) {
    return r.valor + r.id;
}
