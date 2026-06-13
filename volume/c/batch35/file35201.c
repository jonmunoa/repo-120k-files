// fichero 35201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35201;

Registro35201 crear_registro35201(int id) {
    Registro35201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35201(Registro35201 r) {
    return r.valor + r.id;
}
