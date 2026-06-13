// fichero 39497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39497;

Registro39497 crear_registro39497(int id) {
    Registro39497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39497(Registro39497 r) {
    return r.valor + r.id;
}
