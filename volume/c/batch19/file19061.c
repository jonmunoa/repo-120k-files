// fichero 19061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19061;

Registro19061 crear_registro19061(int id) {
    Registro19061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19061(Registro19061 r) {
    return r.valor + r.id;
}
