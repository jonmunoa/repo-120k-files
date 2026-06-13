// fichero 42025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42025;

Registro42025 crear_registro42025(int id) {
    Registro42025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42025(Registro42025 r) {
    return r.valor + r.id;
}
