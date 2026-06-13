// fichero 13681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13681;

Registro13681 crear_registro13681(int id) {
    Registro13681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13681(Registro13681 r) {
    return r.valor + r.id;
}
