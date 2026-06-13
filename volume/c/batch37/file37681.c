// fichero 37681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37681;

Registro37681 crear_registro37681(int id) {
    Registro37681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37681(Registro37681 r) {
    return r.valor + r.id;
}
