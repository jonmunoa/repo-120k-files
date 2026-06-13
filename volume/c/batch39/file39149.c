// fichero 39149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39149;

Registro39149 crear_registro39149(int id) {
    Registro39149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39149(Registro39149 r) {
    return r.valor + r.id;
}
