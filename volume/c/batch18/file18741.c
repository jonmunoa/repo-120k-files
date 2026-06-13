// fichero 18741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18741;

Registro18741 crear_registro18741(int id) {
    Registro18741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18741(Registro18741 r) {
    return r.valor + r.id;
}
