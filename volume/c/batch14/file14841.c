// fichero 14841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14841;

Registro14841 crear_registro14841(int id) {
    Registro14841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14841(Registro14841 r) {
    return r.valor + r.id;
}
