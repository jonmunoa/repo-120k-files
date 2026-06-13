// fichero 41609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41609;

Registro41609 crear_registro41609(int id) {
    Registro41609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41609(Registro41609 r) {
    return r.valor + r.id;
}
