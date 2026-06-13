// fichero 10129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10129;

Registro10129 crear_registro10129(int id) {
    Registro10129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10129(Registro10129 r) {
    return r.valor + r.id;
}
