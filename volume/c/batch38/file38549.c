// fichero 38549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38549;

Registro38549 crear_registro38549(int id) {
    Registro38549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38549(Registro38549 r) {
    return r.valor + r.id;
}
