// fichero 42865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42865;

Registro42865 crear_registro42865(int id) {
    Registro42865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42865(Registro42865 r) {
    return r.valor + r.id;
}
