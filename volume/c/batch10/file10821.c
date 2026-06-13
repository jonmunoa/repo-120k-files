// fichero 10821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10821;

Registro10821 crear_registro10821(int id) {
    Registro10821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10821(Registro10821 r) {
    return r.valor + r.id;
}
