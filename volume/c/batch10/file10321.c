// fichero 10321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10321;

Registro10321 crear_registro10321(int id) {
    Registro10321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10321(Registro10321 r) {
    return r.valor + r.id;
}
