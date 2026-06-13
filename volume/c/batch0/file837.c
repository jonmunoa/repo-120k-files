// fichero 837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro837;

Registro837 crear_registro837(int id) {
    Registro837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro837(Registro837 r) {
    return r.valor + r.id;
}
