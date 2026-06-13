// fichero 42533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42533;

Registro42533 crear_registro42533(int id) {
    Registro42533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42533(Registro42533 r) {
    return r.valor + r.id;
}
