// fichero 7209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7209;

Registro7209 crear_registro7209(int id) {
    Registro7209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7209(Registro7209 r) {
    return r.valor + r.id;
}
