// fichero 36757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36757;

Registro36757 crear_registro36757(int id) {
    Registro36757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36757(Registro36757 r) {
    return r.valor + r.id;
}
