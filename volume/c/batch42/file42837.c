// fichero 42837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42837;

Registro42837 crear_registro42837(int id) {
    Registro42837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42837(Registro42837 r) {
    return r.valor + r.id;
}
