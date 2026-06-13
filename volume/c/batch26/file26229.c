// fichero 26229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26229;

Registro26229 crear_registro26229(int id) {
    Registro26229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26229(Registro26229 r) {
    return r.valor + r.id;
}
