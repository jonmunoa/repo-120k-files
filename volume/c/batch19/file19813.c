// fichero 19813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19813;

Registro19813 crear_registro19813(int id) {
    Registro19813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19813(Registro19813 r) {
    return r.valor + r.id;
}
