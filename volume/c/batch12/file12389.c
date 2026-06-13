// fichero 12389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12389;

Registro12389 crear_registro12389(int id) {
    Registro12389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12389(Registro12389 r) {
    return r.valor + r.id;
}
