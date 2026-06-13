// fichero 38681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38681;

Registro38681 crear_registro38681(int id) {
    Registro38681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38681(Registro38681 r) {
    return r.valor + r.id;
}
