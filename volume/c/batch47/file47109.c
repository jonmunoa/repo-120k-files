// fichero 47109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47109;

Registro47109 crear_registro47109(int id) {
    Registro47109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47109(Registro47109 r) {
    return r.valor + r.id;
}
