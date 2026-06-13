// fichero 12241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12241;

Registro12241 crear_registro12241(int id) {
    Registro12241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12241(Registro12241 r) {
    return r.valor + r.id;
}
