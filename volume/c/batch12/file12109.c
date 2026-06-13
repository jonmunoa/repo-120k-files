// fichero 12109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12109;

Registro12109 crear_registro12109(int id) {
    Registro12109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12109(Registro12109 r) {
    return r.valor + r.id;
}
