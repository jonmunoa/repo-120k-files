// fichero 18209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18209;

Registro18209 crear_registro18209(int id) {
    Registro18209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18209(Registro18209 r) {
    return r.valor + r.id;
}
