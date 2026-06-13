// fichero 17681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17681;

Registro17681 crear_registro17681(int id) {
    Registro17681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17681(Registro17681 r) {
    return r.valor + r.id;
}
