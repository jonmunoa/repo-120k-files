// fichero 44549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44549;

Registro44549 crear_registro44549(int id) {
    Registro44549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44549(Registro44549 r) {
    return r.valor + r.id;
}
