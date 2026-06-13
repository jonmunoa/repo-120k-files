// fichero 24785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24785;

Registro24785 crear_registro24785(int id) {
    Registro24785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24785(Registro24785 r) {
    return r.valor + r.id;
}
