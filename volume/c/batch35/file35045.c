// fichero 35045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35045;

Registro35045 crear_registro35045(int id) {
    Registro35045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35045(Registro35045 r) {
    return r.valor + r.id;
}
