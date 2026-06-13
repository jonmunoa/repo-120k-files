// fichero 26037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26037;

Registro26037 crear_registro26037(int id) {
    Registro26037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26037(Registro26037 r) {
    return r.valor + r.id;
}
