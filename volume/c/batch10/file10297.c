// fichero 10297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10297;

Registro10297 crear_registro10297(int id) {
    Registro10297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10297(Registro10297 r) {
    return r.valor + r.id;
}
