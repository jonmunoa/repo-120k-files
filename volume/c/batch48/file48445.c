// fichero 48445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48445;

Registro48445 crear_registro48445(int id) {
    Registro48445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48445(Registro48445 r) {
    return r.valor + r.id;
}
