// fichero 38229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38229;

Registro38229 crear_registro38229(int id) {
    Registro38229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38229(Registro38229 r) {
    return r.valor + r.id;
}
