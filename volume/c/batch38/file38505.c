// fichero 38505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38505;

Registro38505 crear_registro38505(int id) {
    Registro38505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38505(Registro38505 r) {
    return r.valor + r.id;
}
