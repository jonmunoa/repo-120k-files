// fichero 10177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10177;

Registro10177 crear_registro10177(int id) {
    Registro10177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10177(Registro10177 r) {
    return r.valor + r.id;
}
