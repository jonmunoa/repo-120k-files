// fichero 10381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10381;

Registro10381 crear_registro10381(int id) {
    Registro10381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10381(Registro10381 r) {
    return r.valor + r.id;
}
