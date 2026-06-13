// fichero 12561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12561;

Registro12561 crear_registro12561(int id) {
    Registro12561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12561(Registro12561 r) {
    return r.valor + r.id;
}
