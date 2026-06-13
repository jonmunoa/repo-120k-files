// fichero 26373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26373;

Registro26373 crear_registro26373(int id) {
    Registro26373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26373(Registro26373 r) {
    return r.valor + r.id;
}
