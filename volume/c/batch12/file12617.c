// fichero 12617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12617;

Registro12617 crear_registro12617(int id) {
    Registro12617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12617(Registro12617 r) {
    return r.valor + r.id;
}
