// fichero 36061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36061;

Registro36061 crear_registro36061(int id) {
    Registro36061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36061(Registro36061 r) {
    return r.valor + r.id;
}
