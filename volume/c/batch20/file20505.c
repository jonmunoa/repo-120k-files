// fichero 20505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20505;

Registro20505 crear_registro20505(int id) {
    Registro20505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20505(Registro20505 r) {
    return r.valor + r.id;
}
