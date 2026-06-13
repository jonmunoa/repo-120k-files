// fichero 32229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32229;

Registro32229 crear_registro32229(int id) {
    Registro32229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32229(Registro32229 r) {
    return r.valor + r.id;
}
