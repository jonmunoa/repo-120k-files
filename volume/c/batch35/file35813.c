// fichero 35813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35813;

Registro35813 crear_registro35813(int id) {
    Registro35813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35813(Registro35813 r) {
    return r.valor + r.id;
}
