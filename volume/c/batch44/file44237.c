// fichero 44237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44237;

Registro44237 crear_registro44237(int id) {
    Registro44237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44237(Registro44237 r) {
    return r.valor + r.id;
}
