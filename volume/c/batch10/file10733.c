// fichero 10733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10733;

Registro10733 crear_registro10733(int id) {
    Registro10733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10733(Registro10733 r) {
    return r.valor + r.id;
}
