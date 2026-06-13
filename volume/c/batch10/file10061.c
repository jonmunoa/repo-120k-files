// fichero 10061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10061;

Registro10061 crear_registro10061(int id) {
    Registro10061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10061(Registro10061 r) {
    return r.valor + r.id;
}
