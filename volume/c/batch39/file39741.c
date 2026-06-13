// fichero 39741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39741;

Registro39741 crear_registro39741(int id) {
    Registro39741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39741(Registro39741 r) {
    return r.valor + r.id;
}
