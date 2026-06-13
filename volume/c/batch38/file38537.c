// fichero 38537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38537;

Registro38537 crear_registro38537(int id) {
    Registro38537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38537(Registro38537 r) {
    return r.valor + r.id;
}
