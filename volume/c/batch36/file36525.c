// fichero 36525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36525;

Registro36525 crear_registro36525(int id) {
    Registro36525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36525(Registro36525 r) {
    return r.valor + r.id;
}
