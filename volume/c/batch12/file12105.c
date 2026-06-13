// fichero 12105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12105;

Registro12105 crear_registro12105(int id) {
    Registro12105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12105(Registro12105 r) {
    return r.valor + r.id;
}
