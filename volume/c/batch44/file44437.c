// fichero 44437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44437;

Registro44437 crear_registro44437(int id) {
    Registro44437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44437(Registro44437 r) {
    return r.valor + r.id;
}
