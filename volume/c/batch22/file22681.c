// fichero 22681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22681;

Registro22681 crear_registro22681(int id) {
    Registro22681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22681(Registro22681 r) {
    return r.valor + r.id;
}
