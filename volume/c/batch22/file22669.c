// fichero 22669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22669;

Registro22669 crear_registro22669(int id) {
    Registro22669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22669(Registro22669 r) {
    return r.valor + r.id;
}
