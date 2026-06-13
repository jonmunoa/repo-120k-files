// fichero 19833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19833;

Registro19833 crear_registro19833(int id) {
    Registro19833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19833(Registro19833 r) {
    return r.valor + r.id;
}
