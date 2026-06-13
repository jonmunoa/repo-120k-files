// fichero 17229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17229;

Registro17229 crear_registro17229(int id) {
    Registro17229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17229(Registro17229 r) {
    return r.valor + r.id;
}
