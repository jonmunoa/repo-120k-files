// fichero 35753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35753;

Registro35753 crear_registro35753(int id) {
    Registro35753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35753(Registro35753 r) {
    return r.valor + r.id;
}
