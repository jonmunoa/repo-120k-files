// fichero 46005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46005;

Registro46005 crear_registro46005(int id) {
    Registro46005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46005(Registro46005 r) {
    return r.valor + r.id;
}
