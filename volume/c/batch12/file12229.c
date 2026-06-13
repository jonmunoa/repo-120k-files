// fichero 12229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12229;

Registro12229 crear_registro12229(int id) {
    Registro12229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12229(Registro12229 r) {
    return r.valor + r.id;
}
