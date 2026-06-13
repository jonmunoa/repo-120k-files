// fichero 47597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47597;

Registro47597 crear_registro47597(int id) {
    Registro47597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47597(Registro47597 r) {
    return r.valor + r.id;
}
