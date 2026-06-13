// fichero 30497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30497;

Registro30497 crear_registro30497(int id) {
    Registro30497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30497(Registro30497 r) {
    return r.valor + r.id;
}
