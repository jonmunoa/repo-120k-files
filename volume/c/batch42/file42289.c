// fichero 42289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42289;

Registro42289 crear_registro42289(int id) {
    Registro42289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42289(Registro42289 r) {
    return r.valor + r.id;
}
