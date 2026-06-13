// fichero 10037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10037;

Registro10037 crear_registro10037(int id) {
    Registro10037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10037(Registro10037 r) {
    return r.valor + r.id;
}
