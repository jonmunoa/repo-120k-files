// fichero 26345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26345;

Registro26345 crear_registro26345(int id) {
    Registro26345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26345(Registro26345 r) {
    return r.valor + r.id;
}
