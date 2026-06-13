// fichero 10221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10221;

Registro10221 crear_registro10221(int id) {
    Registro10221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10221(Registro10221 r) {
    return r.valor + r.id;
}
