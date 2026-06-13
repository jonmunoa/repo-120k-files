// fichero 5681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5681;

Registro5681 crear_registro5681(int id) {
    Registro5681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5681(Registro5681 r) {
    return r.valor + r.id;
}
