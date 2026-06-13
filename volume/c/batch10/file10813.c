// fichero 10813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10813;

Registro10813 crear_registro10813(int id) {
    Registro10813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10813(Registro10813 r) {
    return r.valor + r.id;
}
