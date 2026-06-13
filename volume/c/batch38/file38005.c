// fichero 38005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38005;

Registro38005 crear_registro38005(int id) {
    Registro38005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38005(Registro38005 r) {
    return r.valor + r.id;
}
