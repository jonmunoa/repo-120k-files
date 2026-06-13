// fichero 10769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10769;

Registro10769 crear_registro10769(int id) {
    Registro10769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10769(Registro10769 r) {
    return r.valor + r.id;
}
