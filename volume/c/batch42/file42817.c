// fichero 42817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42817;

Registro42817 crear_registro42817(int id) {
    Registro42817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42817(Registro42817 r) {
    return r.valor + r.id;
}
