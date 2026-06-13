// fichero 10469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10469;

Registro10469 crear_registro10469(int id) {
    Registro10469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10469(Registro10469 r) {
    return r.valor + r.id;
}
