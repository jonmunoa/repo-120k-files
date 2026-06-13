// fichero 12217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12217;

Registro12217 crear_registro12217(int id) {
    Registro12217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12217(Registro12217 r) {
    return r.valor + r.id;
}
