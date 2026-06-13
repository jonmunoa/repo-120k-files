// fichero 10525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10525;

Registro10525 crear_registro10525(int id) {
    Registro10525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10525(Registro10525 r) {
    return r.valor + r.id;
}
