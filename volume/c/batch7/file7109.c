// fichero 7109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7109;

Registro7109 crear_registro7109(int id) {
    Registro7109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7109(Registro7109 r) {
    return r.valor + r.id;
}
