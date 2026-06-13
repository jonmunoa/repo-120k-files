// fichero 19681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19681;

Registro19681 crear_registro19681(int id) {
    Registro19681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19681(Registro19681 r) {
    return r.valor + r.id;
}
