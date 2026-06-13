// fichero 10017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10017;

Registro10017 crear_registro10017(int id) {
    Registro10017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10017(Registro10017 r) {
    return r.valor + r.id;
}
