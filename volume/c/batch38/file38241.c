// fichero 38241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38241;

Registro38241 crear_registro38241(int id) {
    Registro38241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38241(Registro38241 r) {
    return r.valor + r.id;
}
