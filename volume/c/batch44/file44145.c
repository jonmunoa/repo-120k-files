// fichero 44145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44145;

Registro44145 crear_registro44145(int id) {
    Registro44145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44145(Registro44145 r) {
    return r.valor + r.id;
}
