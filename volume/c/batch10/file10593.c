// fichero 10593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10593;

Registro10593 crear_registro10593(int id) {
    Registro10593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10593(Registro10593 r) {
    return r.valor + r.id;
}
