// fichero 36585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36585;

Registro36585 crear_registro36585(int id) {
    Registro36585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36585(Registro36585 r) {
    return r.valor + r.id;
}
