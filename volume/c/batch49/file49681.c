// fichero 49681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49681;

Registro49681 crear_registro49681(int id) {
    Registro49681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49681(Registro49681 r) {
    return r.valor + r.id;
}
