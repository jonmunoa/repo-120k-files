// fichero 39085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39085;

Registro39085 crear_registro39085(int id) {
    Registro39085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39085(Registro39085 r) {
    return r.valor + r.id;
}
