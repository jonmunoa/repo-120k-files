// fichero 12373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12373;

Registro12373 crear_registro12373(int id) {
    Registro12373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12373(Registro12373 r) {
    return r.valor + r.id;
}
