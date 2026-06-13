// fichero 10601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10601;

Registro10601 crear_registro10601(int id) {
    Registro10601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10601(Registro10601 r) {
    return r.valor + r.id;
}
