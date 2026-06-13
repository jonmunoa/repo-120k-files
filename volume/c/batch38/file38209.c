// fichero 38209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38209;

Registro38209 crear_registro38209(int id) {
    Registro38209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38209(Registro38209 r) {
    return r.valor + r.id;
}
