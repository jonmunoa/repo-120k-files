// fichero 42065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42065;

Registro42065 crear_registro42065(int id) {
    Registro42065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42065(Registro42065 r) {
    return r.valor + r.id;
}
