// fichero 54681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54681;

Registro54681 crear_registro54681(int id) {
    Registro54681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54681(Registro54681 r) {
    return r.valor + r.id;
}
