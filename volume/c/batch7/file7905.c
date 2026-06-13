// fichero 7905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7905;

Registro7905 crear_registro7905(int id) {
    Registro7905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7905(Registro7905 r) {
    return r.valor + r.id;
}
