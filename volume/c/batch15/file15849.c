// fichero 15849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15849;

Registro15849 crear_registro15849(int id) {
    Registro15849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15849(Registro15849 r) {
    return r.valor + r.id;
}
