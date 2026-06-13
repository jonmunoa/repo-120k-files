// fichero 10797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10797;

Registro10797 crear_registro10797(int id) {
    Registro10797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10797(Registro10797 r) {
    return r.valor + r.id;
}
