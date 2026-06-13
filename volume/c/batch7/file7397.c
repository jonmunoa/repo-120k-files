// fichero 7397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7397;

Registro7397 crear_registro7397(int id) {
    Registro7397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7397(Registro7397 r) {
    return r.valor + r.id;
}
