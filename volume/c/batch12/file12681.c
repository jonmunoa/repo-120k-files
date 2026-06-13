// fichero 12681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12681;

Registro12681 crear_registro12681(int id) {
    Registro12681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12681(Registro12681 r) {
    return r.valor + r.id;
}
