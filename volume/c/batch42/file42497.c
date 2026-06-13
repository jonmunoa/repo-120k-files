// fichero 42497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42497;

Registro42497 crear_registro42497(int id) {
    Registro42497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42497(Registro42497 r) {
    return r.valor + r.id;
}
