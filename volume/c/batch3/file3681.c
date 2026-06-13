// fichero 3681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3681;

Registro3681 crear_registro3681(int id) {
    Registro3681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3681(Registro3681 r) {
    return r.valor + r.id;
}
