// fichero 47117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47117;

Registro47117 crear_registro47117(int id) {
    Registro47117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47117(Registro47117 r) {
    return r.valor + r.id;
}
