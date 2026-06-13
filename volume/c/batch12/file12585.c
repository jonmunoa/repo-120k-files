// fichero 12585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12585;

Registro12585 crear_registro12585(int id) {
    Registro12585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12585(Registro12585 r) {
    return r.valor + r.id;
}
