// fichero 10045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10045;

Registro10045 crear_registro10045(int id) {
    Registro10045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10045(Registro10045 r) {
    return r.valor + r.id;
}
