// fichero 47149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47149;

Registro47149 crear_registro47149(int id) {
    Registro47149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47149(Registro47149 r) {
    return r.valor + r.id;
}
