// fichero 10973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10973;

Registro10973 crear_registro10973(int id) {
    Registro10973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10973(Registro10973 r) {
    return r.valor + r.id;
}
