// fichero 12077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12077;

Registro12077 crear_registro12077(int id) {
    Registro12077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12077(Registro12077 r) {
    return r.valor + r.id;
}
