// fichero 10609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10609;

Registro10609 crear_registro10609(int id) {
    Registro10609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10609(Registro10609 r) {
    return r.valor + r.id;
}
