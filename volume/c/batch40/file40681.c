// fichero 40681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40681;

Registro40681 crear_registro40681(int id) {
    Registro40681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40681(Registro40681 r) {
    return r.valor + r.id;
}
