// fichero 42681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42681;

Registro42681 crear_registro42681(int id) {
    Registro42681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42681(Registro42681 r) {
    return r.valor + r.id;
}
