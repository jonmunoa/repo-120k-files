// fichero 4681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4681;

Registro4681 crear_registro4681(int id) {
    Registro4681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4681(Registro4681 r) {
    return r.valor + r.id;
}
