// fichero 10661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10661;

Registro10661 crear_registro10661(int id) {
    Registro10661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10661(Registro10661 r) {
    return r.valor + r.id;
}
