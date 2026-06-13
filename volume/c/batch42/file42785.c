// fichero 42785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42785;

Registro42785 crear_registro42785(int id) {
    Registro42785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42785(Registro42785 r) {
    return r.valor + r.id;
}
