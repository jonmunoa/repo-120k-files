// fichero 22041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22041;

Registro22041 crear_registro22041(int id) {
    Registro22041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22041(Registro22041 r) {
    return r.valor + r.id;
}
