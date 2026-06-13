// fichero 22241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22241;

Registro22241 crear_registro22241(int id) {
    Registro22241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22241(Registro22241 r) {
    return r.valor + r.id;
}
