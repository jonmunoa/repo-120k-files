// fichero 39109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39109;

Registro39109 crear_registro39109(int id) {
    Registro39109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39109(Registro39109 r) {
    return r.valor + r.id;
}
