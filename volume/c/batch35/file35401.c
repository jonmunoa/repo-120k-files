// fichero 35401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35401;

Registro35401 crear_registro35401(int id) {
    Registro35401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35401(Registro35401 r) {
    return r.valor + r.id;
}
