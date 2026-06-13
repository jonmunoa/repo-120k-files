// fichero 10557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10557;

Registro10557 crear_registro10557(int id) {
    Registro10557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10557(Registro10557 r) {
    return r.valor + r.id;
}
