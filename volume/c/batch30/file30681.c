// fichero 30681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30681;

Registro30681 crear_registro30681(int id) {
    Registro30681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30681(Registro30681 r) {
    return r.valor + r.id;
}
