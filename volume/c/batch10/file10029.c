// fichero 10029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10029;

Registro10029 crear_registro10029(int id) {
    Registro10029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10029(Registro10029 r) {
    return r.valor + r.id;
}
