// fichero 35273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35273;

Registro35273 crear_registro35273(int id) {
    Registro35273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35273(Registro35273 r) {
    return r.valor + r.id;
}
