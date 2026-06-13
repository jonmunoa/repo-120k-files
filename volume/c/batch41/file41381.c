// fichero 41381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41381;

Registro41381 crear_registro41381(int id) {
    Registro41381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41381(Registro41381 r) {
    return r.valor + r.id;
}
