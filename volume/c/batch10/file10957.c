// fichero 10957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10957;

Registro10957 crear_registro10957(int id) {
    Registro10957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10957(Registro10957 r) {
    return r.valor + r.id;
}
