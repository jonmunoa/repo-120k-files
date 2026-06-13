// fichero 12061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12061;

Registro12061 crear_registro12061(int id) {
    Registro12061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12061(Registro12061 r) {
    return r.valor + r.id;
}
