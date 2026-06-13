// fichero 22165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22165;

Registro22165 crear_registro22165(int id) {
    Registro22165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22165(Registro22165 r) {
    return r.valor + r.id;
}
