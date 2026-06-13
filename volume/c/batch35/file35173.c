// fichero 35173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35173;

Registro35173 crear_registro35173(int id) {
    Registro35173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35173(Registro35173 r) {
    return r.valor + r.id;
}
