// fichero 229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro229;

Registro229 crear_registro229(int id) {
    Registro229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro229(Registro229 r) {
    return r.valor + r.id;
}
