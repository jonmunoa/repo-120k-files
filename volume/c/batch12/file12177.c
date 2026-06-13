// fichero 12177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12177;

Registro12177 crear_registro12177(int id) {
    Registro12177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12177(Registro12177 r) {
    return r.valor + r.id;
}
