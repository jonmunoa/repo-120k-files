// fichero 10497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10497;

Registro10497 crear_registro10497(int id) {
    Registro10497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10497(Registro10497 r) {
    return r.valor + r.id;
}
