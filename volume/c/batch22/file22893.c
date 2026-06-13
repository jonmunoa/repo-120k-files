// fichero 22893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22893;

Registro22893 crear_registro22893(int id) {
    Registro22893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22893(Registro22893 r) {
    return r.valor + r.id;
}
