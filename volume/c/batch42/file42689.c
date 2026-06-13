// fichero 42689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42689;

Registro42689 crear_registro42689(int id) {
    Registro42689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42689(Registro42689 r) {
    return r.valor + r.id;
}
