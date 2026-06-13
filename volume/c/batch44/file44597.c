// fichero 44597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44597;

Registro44597 crear_registro44597(int id) {
    Registro44597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44597(Registro44597 r) {
    return r.valor + r.id;
}
