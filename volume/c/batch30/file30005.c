// fichero 30005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30005;

Registro30005 crear_registro30005(int id) {
    Registro30005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30005(Registro30005 r) {
    return r.valor + r.id;
}
