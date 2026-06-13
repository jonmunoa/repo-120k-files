// fichero 42393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42393;

Registro42393 crear_registro42393(int id) {
    Registro42393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42393(Registro42393 r) {
    return r.valor + r.id;
}
