// fichero 49061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49061;

Registro49061 crear_registro49061(int id) {
    Registro49061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49061(Registro49061 r) {
    return r.valor + r.id;
}
