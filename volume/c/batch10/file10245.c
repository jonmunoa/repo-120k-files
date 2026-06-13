// fichero 10245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10245;

Registro10245 crear_registro10245(int id) {
    Registro10245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10245(Registro10245 r) {
    return r.valor + r.id;
}
