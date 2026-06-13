// fichero 38437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38437;

Registro38437 crear_registro38437(int id) {
    Registro38437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38437(Registro38437 r) {
    return r.valor + r.id;
}
