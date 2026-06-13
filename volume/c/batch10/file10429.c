// fichero 10429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10429;

Registro10429 crear_registro10429(int id) {
    Registro10429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10429(Registro10429 r) {
    return r.valor + r.id;
}
