// fichero 37153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37153;

Registro37153 crear_registro37153(int id) {
    Registro37153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37153(Registro37153 r) {
    return r.valor + r.id;
}
