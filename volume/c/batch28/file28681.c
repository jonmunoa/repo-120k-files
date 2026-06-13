// fichero 28681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28681;

Registro28681 crear_registro28681(int id) {
    Registro28681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28681(Registro28681 r) {
    return r.valor + r.id;
}
