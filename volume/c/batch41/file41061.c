// fichero 41061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41061;

Registro41061 crear_registro41061(int id) {
    Registro41061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41061(Registro41061 r) {
    return r.valor + r.id;
}
