// fichero 10005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10005;

Registro10005 crear_registro10005(int id) {
    Registro10005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10005(Registro10005 r) {
    return r.valor + r.id;
}
