// fichero 10533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10533;

Registro10533 crear_registro10533(int id) {
    Registro10533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10533(Registro10533 r) {
    return r.valor + r.id;
}
