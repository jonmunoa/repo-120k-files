// fichero 29681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29681;

Registro29681 crear_registro29681(int id) {
    Registro29681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29681(Registro29681 r) {
    return r.valor + r.id;
}
