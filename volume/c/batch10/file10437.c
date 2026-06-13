// fichero 10437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10437;

Registro10437 crear_registro10437(int id) {
    Registro10437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10437(Registro10437 r) {
    return r.valor + r.id;
}
