// fichero 34005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34005;

Registro34005 crear_registro34005(int id) {
    Registro34005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34005(Registro34005 r) {
    return r.valor + r.id;
}
