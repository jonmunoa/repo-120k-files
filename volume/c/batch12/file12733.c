// fichero 12733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12733;

Registro12733 crear_registro12733(int id) {
    Registro12733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12733(Registro12733 r) {
    return r.valor + r.id;
}
