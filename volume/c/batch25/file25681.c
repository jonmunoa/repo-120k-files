// fichero 25681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25681;

Registro25681 crear_registro25681(int id) {
    Registro25681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25681(Registro25681 r) {
    return r.valor + r.id;
}
