// fichero 10833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10833;

Registro10833 crear_registro10833(int id) {
    Registro10833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10833(Registro10833 r) {
    return r.valor + r.id;
}
