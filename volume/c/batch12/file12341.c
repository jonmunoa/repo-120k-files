// fichero 12341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12341;

Registro12341 crear_registro12341(int id) {
    Registro12341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12341(Registro12341 r) {
    return r.valor + r.id;
}
