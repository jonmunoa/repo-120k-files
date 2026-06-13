// fichero 41129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41129;

Registro41129 crear_registro41129(int id) {
    Registro41129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41129(Registro41129 r) {
    return r.valor + r.id;
}
