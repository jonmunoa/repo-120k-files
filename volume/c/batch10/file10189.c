// fichero 10189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10189;

Registro10189 crear_registro10189(int id) {
    Registro10189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10189(Registro10189 r) {
    return r.valor + r.id;
}
